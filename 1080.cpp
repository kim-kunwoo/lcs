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
	multiset<int> save;
	vector<char> record;
	string str1 = "";
	int n = 0;
	int m = 0;
	int count = 0;
	getline(cin, str1);
	for (int i = 0; i < str1.size(); i++)
	{
		if (str1[i] == ' ')
		{
			string str2 = str1.substr(0, i);
			string str3 = str1.substr(i + 1, str1.size() - (i + 1));
			n = stoi(str2);
			m = stoi(str3);
		}
	}
	int arr1[51][51] = { 0 };
	int arr2[51][51] = { 0 };
	string arry;
	int m2 = 0;
	for (int i = 0; i < n; i++)
	{
		getline(cin, arry);
	
		for (int j = 0; j < arry.size(); j++)
		{
			int k = arry[j] - 48;
			arr1[m2][j] = k;
		}
		m2++;
	}
	string arry2;
	m2 = 0;
	for (int i = 0; i < n; i++)
	{
		getline(cin, arry2);
		for (int j = 0; j < arry2.size(); j++)
		{
			int k = arry2[j] - 48;
			arr2[m2][j] = k;
		}
		m2++;
	}
	int a = n - 3 + 1;
	int b = m - 3 + 1;
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
		{
			if (arr1[i][j] == arr2[i][j])
			{
				continue;
			}
			else {
				for (int k1 = i + 0; k1 < i + 3; k1++)
				{
					for (int k2 = j + 0; k2 < j + 3; k2++)
					{
						if (arr1[k1][k2] == 1)
						{
							arr1[k1][k2] = 0;
						}
						else {
							arr1[k1][k2] = 1;
						}
					}
				}
				count++;
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (arr1[i][j] != arr2[i][j])
			{
				count = -1;
				break;
			}
		}
		if (count == -1)
		{
			break;
		}
	}

	cout << count << endl;

	return 0;
}