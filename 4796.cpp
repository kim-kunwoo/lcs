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
	int mode1 = 0;
	int mode2 = 0;
	vector<string> result;
	vector<int> save;
	vector<char> record;
	string str1 = "";
	vector<int>::iterator it;
	int sum = 0;
	string str2 = "";
	int case1 = 1;
	while (str1 != "0 0 0")
	{
		getline(cin, str1);
		if (str1 == "0 0 0")
		{
			break;
		}
		int k = 0;
		for (int i = 0; i < str1.size(); i++)
		{
			if (str1[i] == ' ')
			{
				str2 = str1.substr(k, i - k);
				k = i + 1;
				int n = stoi(str2);
				save.push_back(n);
			}
			if (i == str1.size() - 1)
			{
				str2 = str1.substr(k, str1.size() - k);
				int n = stoi(str2);
				save.push_back(n);
			}
		}
		it = save.begin();
		int a = *it;
		it++;
		int b = *it;
		it++;
		int c = *it;
		int last = 0;
		if (c%b >= a)
		{
			last = a;
		}
		else {
			last = c%b;
		}
		sum = ((c / b) * a) + last;
		str2.clear();
		str2 = "Case " + to_string(case1) + ": " + to_string(sum);
		result.push_back(str2);
		case1++;
		str2.clear();
		save.clear();

	}

	for (int i = 0; i < result.size(); i++)
	{
		cout << result[i] << endl;;
	}
	return 0;
}