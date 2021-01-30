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
	vector<string> save;
	vector<char> record;
	string str1 = "";
	vector<char>::iterator it;
	it = record.end();

	getline(cin, str1);

	string str2 = "";
	
	for (int i = 0; i < str1.size(); i++)
	{
		if (i == 0) {
			
			int n = str1[i]-48;
			if (n == 0)
			{
				str2 = "0";
			}
			if (n == 1)
			{
				str2 = "1";
			}
			if (n == 2)
			{
				str2 = "10";
			}
			if (n == 3)
			{
				str2 = "11";
			}
			if (n == 4)
			{
				str2 = "100";
			}
			if (n == 5)
			{
				str2 = "101";
			}
			if (n == 6)
			{
				str2 = "110";
			}
			if (n == 7)
			{
				str2 = "111";
			}
		}
		else {
			int n = str1[i] - 48;
			if (n == 0)
			{
				str2 = "000";
			}
			if (n == 1)
			{
				str2 = "001";
			}
			if (n == 2)
			{
				str2 = "010";
			}
			if (n == 3)
			{
				str2 = "011";
			}
			if (n == 4)
			{
				str2 = "100";
			}
			if (n == 5)
			{
				str2 = "101";
			}
			if (n == 6)
			{
				str2 = "110";
			}
			if (n == 7)
			{
				str2 = "111";
			}
		}
		result.push_back(str2);
		str2 = "";
	}

	for (int i = 0; i < result.size(); i++)
	{
		cout << result[i];
	}

	cout << endl;
	return 0;
}