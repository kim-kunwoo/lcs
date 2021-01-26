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
	int mod = 0;
	int check = 0;
	cin >> num;
	int direction=0;
	int sum = 0;
	vector<string>save;
	vector<int>result;
	cin.ignore();
	for (int i = 0; i < num; i++)
	{
		getline(cin, str1);
		save.push_back(str1);
	}

	int search = 0;

	for (int i = 0; i < save.size(); i++)
	{
		str2 = save[i];
		search = save[i].size();
		int k1 = 0;
		int k2 = 0;
		int k3 = 0;
		for (int j = 0; j < search/2; j++)
		{
			if (save[i][j+k1] == save[i][search-1-j-k2])
			{
				check++;
			}
			else if (save[i][j + 1] == save[i][search - 1 - j] && save[i][j] != save[i][search - 2 - j])
			{
				if (mod == 0) {
					k1++;
					mod = 1;
					check++;
				}
			}
			else if (save[i][j] == save[i][search - 2 - j] && save[i][j + 1] != save[i][search - 1 - j])
			{
				if (mod == 0) {
					k2++;
					mod = 1;
					check++;
				}
			}
			else if (save[i][j] == save[i][search - 2 - j] && save[i][j + 1] == save[i][search - 1 - j])
			{
				k3 = j;
				mod = 1;
				int max1 = 0;
				int max2 = 0;
				max1 = check;
				max2 = check;				
				for (int k = k3; k < search / 2; k++)
				{
					if (save[i][k + 1] == save[i][search - 1 - k])
					{
						max1++;
					}
				}
				for (int k = k3; k < search / 2; k++)
				{
					if (save[i][k] == save[i][search - 2 - k])
					{
						max2++;
					}
				}
				if (max1 > max2)
				{
					check = max1;
				}
				else {
					check = max2;
				}
				if (search / 2 == check)
				{
						result.push_back(mod);
						break;
				}
				else if (search / 2 > check) {
					if (direction == 0)
					{
						result.push_back(2);
						direction++;
					}
				}
			}
			if (search / 2 == check)
			{
				if (mod == 1)
				{
					result.push_back(mod);
					break;
				}
				if (mod == 0)
				{
					result.push_back(mod);
					break;
				}
			}
			else if(j == search/2-1 && search / 2 > check){
				if (direction == 0)
				{
					result.push_back(2);
					direction++;
				}
			}
		}
		direction = 0;
		mod = 0;
		check = 0;
	}

	for (int i = 0; i < result.size(); i++)
	{
		cout << result[i] << endl;
	}


	return 0;
}
