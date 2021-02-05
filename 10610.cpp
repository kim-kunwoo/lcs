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
	getline(cin, str1);
	int chk = 0;
	for (int i = 0; i < str1.size(); i++)
	{
		int n = str1[i]-48;
		chk = chk + n;
		save.insert(n);
	}
	multiset<int>::iterator it;
	it = save.begin();
	if (*it == 0 && chk % 3 == 0)
	{
		it = save.end();
		it--;
		while (it != save.begin())
		{
			cout << *it;
			it--;
		}
		cout << *it << endl;
	}
	else {
		int k = -1;
		cout << k << endl;
	}
	return 0;
}