#include<vector>
#include<set>
#include<iostream>
#include<cstdlib>
#include<string>

using namespace std;

int main()
{
	int num = 0;
	string str1;
	string str2;
	
	cin >> num;
	
	int mode = 0;
	int sum = 0;
	vector<string>save;
	vector<string>result;

	for (int i = 0; i <= num; i++)
	{
		getline(cin, str1);
		save.push_back(str1);
	}



	for (int i = 0; i < save.size(); i++)
	{
		for (int j = 0; j < save[i].size(); j++)
		{
			if (save[i][j] == '(')
			{
				sum++;
				mode = 1;
			}
			if (save[i][j] == ')')
			{
				if (j == 0)
				{
					result.push_back("NO");
					break;
				}
				else if(mode == 1){
					sum--;
					if (sum == 0)
					{
						mode = 0;
					}
				}
				else {
					result.push_back("NO");
					break;
				}
			}
			if (j== save[i].size()-1 &&sum == 0)
			{
				result.push_back("YES");
				sum = 0;
			}
			if (j == save[i].size() - 1 && sum != 0)
			{
				result.push_back("NO");
				sum = 0;
			}
		
		}
		
	}

	for (int i = 0; i < result.size(); i++)
	{
		cout << result[i] << endl;
	}


	return 0;
}