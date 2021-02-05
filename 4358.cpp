#include<vector>
#include<set>
#include<iostream>
#include<cstdlib>
#include<string>
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
	map<string, int> save2;
	while (getline(cin, str1))
	{
		int trigger = 0;
		map<string, int>::iterator iter;
		
		if (save2.find(str1) != save2.end())
		{
			iter = save2.find(str1);
			trigger = 1;
			iter->second++;
		}

		if (trigger == 0)
		{
			save2.insert(pair<string, int>(str1, 1));
		}
		count++;
	}

	map<string, int>::iterator iter;
	for (iter = save2.begin(); iter != save2.end(); iter++)
	{
		cout << fixed;
		cout.precision(4);
		double result = (*iter).second / (double)count *100;
		cout << (*iter).first << " " << result << endl;
	}

	return 0;
}