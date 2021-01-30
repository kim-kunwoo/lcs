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
	int num = 0;
	int joker = 0;
	cin >> num;
	vector<int> result;
	vector<string> save;
	map<int, int> record;
	for (int i = 0; i < num; i++)
	{
		int num1 = 0;
		cin >> num1;
		string str1;
		int count = 0;
		cin.ignore();
		int ma = 0;
		int mb = 0;
		for (int j = 0; j < num1; j++)
		{
			getline(cin, str1);
			save.push_back(str1);
			string str2;
			string str3;
			int a = 0 ;
			int b = 0;
			for (int k = 0; k < str1.size(); k++)
			{
				if (str1[k] == ' ')
				{
					str2 = str1.substr(0, k);
					str3 = str1.substr(k + 1, str1.size() - k - 1);
					a = stoi(str2);
					b = stoi(str3);
					record.insert(make_pair(a, b));
				}
			}
		}
		map<int, int>::iterator it;
		for (it = record.begin(); it != record.end(); it++)
		{
			if (it == record.begin())
			{
				count++;
				mb = it->second;
			}
			else {
				if (it->second < mb)
				{
					count++;
					mb = it->second;
				}
			}

		}
		result.push_back(count);
		record.clear();
	}
	for (int i = 0; i < result.size(); i++)
	{
		cout << result[i] << endl;
	}

	return 0;
}