#include<vector>
#include<set>
#include<iostream>
#include<cstdlib>
#include<string>
#include<deque>
#include<map>
#include<algorithm>
using namespace std;

int main()
{

	vector<string> result;
	vector<int> save;
	vector<char> record;
	string str1 = "";
	int num = 0;
	int m = 0;
	int count = 0;
	int count2 = 0;
	string arr2[101];
	char arr1[101][101] = { 0 };
	cin >> num;
	cin.ignore();
	for (int i = 0; i < num; i++)
	{
		getline(cin, arr2[i]);
	}
	for (int i = 0; i < num; i++)
	{
		int m = 0;
		for (int j = 0; j < arr2[i].size(); j++)
		{
			string str2;
		
			if (arr2[i][j] == 'X')
			{
				if (j != arr2[i].size() - 1)
				{
					str2 = arr2[i].substr(m, j - m);
					m = j + 1;
				}
				else {
					str2 = arr2[i].substr(m, j-m);
				}
			}
			else if (j == arr2[i].size() - 1)
			{
				str2 = arr2[i].substr(m, j-m+1);
			}
			if (str2.size() >= 2)
			{
				if (str2[0] == '.')
				{
					count++;
				}
			}
		}
		
	}
	for (int i = 0; i < num; i++)
	{
		int m = 0;
		string str2 ="";
		for (int j = 0; j < arr2[i].size(); j++)
		{

			if (arr2[j][i] == '.')
			{
				str2.push_back(arr2[j][i]);
			}

			if (arr2[j][i] == 'X')
			{
				if (str2.size() >= 2)
				{
					if (str2[0] == '.')
					{
						count2++;
						str2.clear();
					}
				}
				else {
					str2.clear();
				}

			}
			if (j == num-1)
			{
				if (str2.size() >= 2)
				{
					if (str2[0] == '.')
					{
						count2++;
						str2.clear();
					}
				}
				else {
					str2.clear();
				}
			}
		}

	}
	cout << count << " " << count2 << endl;

	return 0;
}