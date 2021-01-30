#include<vector>
#include<set>
#include<iostream>
#include<cstdlib>
#include<string>
#include<deque>
#include<algorithm>
using namespace std;

int main()
{
	long long int temp1 = 0;
	long long int temp2 = 0;
	string str2;
	int m[26] = { 0 };
	deque<string>save2;
	set<string>save1;
	while (cin >> str2)

	{

		for (int i = 0; i < str2.length(); i++)
		{
			if (str2[i] >= 'a' && str2[i] <= 'z')
			{
				m[str2[i] - 97]++;
			}
		}
		str2.clear();

	}
	int max = 0;
	vector<char> result;
	for (int i = 0; i < 26; i++)
	{
		if (max < m[i])
		{
			max = m[i];
		}
	}
	for (int i = 0; i < 26; i++)
	{
		char a = 'a';
		if (max == m[i])
		{
			a = a + i;
			result.push_back(a);
		}
	}

	for (int i = 0; i < result.size(); i++)
	{
		cout << result[i];
	}

	cout << endl;
	return 0;
}