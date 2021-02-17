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
	cin >> num;
	for (int i = 0; i < num; i++)
	{
		cin >> m;
		cin.ignore();
		cin.clear();
		for (int j = 0; j < m; j++)
		{
			getline(cin, str3);
			save2.push_back(str3);
		}
		vector<string>::iterator iter;
		vector<string>::iterator iter2;
		sort(save2.begin(), save2.end());
		for (int k = 0; k < m - 1; k++)
		{
			string str1;
			string str2;
			str1 = save2[k];
			str2 = save2[k + 1];
			if (str1.length() >= str2.length())
			{
				continue;
			}
			else {
				if (str2.find(str1) == 0)
				{
					chk = 1;
				}
			}

			if (chk == 1)
			{
				result.push_back("NO");
				break;
				save2.clear();
			}
		}
		if (chk == 0) {
			result.push_back("YES");
		}
		chk = 0;
		save2.clear();
	}

	vector<string>::iterator iter3;
	for (iter3 = result.begin(); iter3 != result.end(); iter3++)
	{
		cout << *iter3 << endl;
	}



	return 0;
}