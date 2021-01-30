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

	int count = 0;
	cin >> count;
	string str1;
	deque<string>save2;
	set<string>save1;
	int max = 0;
	for (int i = 0; i < count; i++)
	{
		cin >> str1;
		if (str1.size() > max)
		{
			max = str1.size();
		}
		save1.insert(str1);
	}
	set<string>::iterator iter;
	iter = save1.begin();
	for (int i = 1; i <= max; i++)
	{
		for (iter = save1.begin(); iter != save1.end(); iter++)
		{
			if (i == (*iter).size())
			{
				string str2 = *iter;
				save2.push_back(*iter);
			}
		}
	}

	for (int i = 0; i < save2.size(); i++)
	{
		cout << save2[i] << endl;
	}
	

	return 0;
}