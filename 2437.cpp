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
	multiset<int> save;
	vector<string> save2;
	vector<char> record;
	vector<string> result;
	string str3;
	int num = 0;
	int m = 0;
	int chk = 0;
	int end = 1;
	cin >> num;
	for (int i = 0; i < num; i++)
	{
		cin >> m;
		save.insert(m);
	}

	multiset<int>::iterator iter3;
	iter3 = save.begin();
	while (iter3 != save.end())
	{
		if (chk + 1 < *iter3)
		{
			break;
		}
		chk = chk + *iter3;
		iter3++;

	}

	end = chk + 1;
	cout << end << endl;


	return 0;
}