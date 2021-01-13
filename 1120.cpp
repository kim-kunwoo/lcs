#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

int main() {

	vector<string> save;
	vector<char> result;
	int arr[5] = { 0 };
	int count = 1;
	vector<char>::iterator iter = result.begin();

	string str1;
	string str2;
	string temp;
	cin >> str1 >> str2;
	//getline(cin, temp);
	//save.push_back(temp);
	

	/*for (int i = 0; i <= save[0].size(); i++)
	{
		if (save[0][i] == ' ')
		{
			str1 = save[0].substr(0, i);
			str2 = save[0].substr(i + 1);
		}
	}*/
	int num = 0;
	int max = 0;
	if (str2.size() >= str1.size())
	{
		for (int i = 0; i <= str2.size()-str1.size(); i++)
		{
			for (int j = 0; j <= str1.size() - 1; j++)
			{
				if (str2[j+i] == str1[j])
				{
					num++;
				}	
			}
			if (max < num)
			{
				max = num;
				num = 0;
			}
			num = 0;
		}
	}
/*	if (str2.size() == str1.size())
	{
		
		for (int j = 0; j <= str1.size() - 1; j++)
		{

			if (str1[j] == str2[j] && str1[j] != '\0')
			{
				num++;
			}
			if (max < num)
			{
				max = num;
			}
		}

	}*/
	int fin = str1.size() - max;

	cout <<fin<< endl;

	return 0;

}