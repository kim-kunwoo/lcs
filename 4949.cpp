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
	string str1="";
	vector<char>::iterator it;
	it = record.end();
	while (str1[0] != '.')
	{
		getline(cin, str1);
		
		string str2 = str1;
		if (str1[0] == '.') break;
		for (int i = 0; i < str1.size(); i++)
		{
			if (str1[i] == '(')
			{
				record.push_back(')');
				mode1++;
			}
			else if (str1[i] == '[')
			{
				record.push_back(']');
				mode2++;
			}
			else if (str1[i] == ')' && mode1 !=0)
			{
				
					it = record.end();
					it--;

					if (*it == str1[i])
					{
						mode1--;
						record.erase(it);
					}
					else {
						result.push_back("no");
						break;
					}
				
			}
			else if (str1[i] == ']' && mode2 != 0)
			{
				
					it = record.end();
					it--;

					if (*it == str1[i])
					{
						mode2--;
						record.erase(it);
					}
					else {
						result.push_back("no");
						break;
					}
			
			}
			else if (str1[i] == ')' && mode1 == 0)
			{
				
					if (i != str1.size() - 1)
					{
						result.push_back("no");
						break;
					}
				
			}
			else if (str1[i] == ']'  && mode2 == 0)
			{
				
					if (i != str1.size() - 1)
					{
						result.push_back("no");
						break;
					}
				
			}
			if (i == str1.size() - 1)
			{
				if (mode1 != 0 || mode2 != 0)
				{
					result.push_back("no");
				}
				if (mode1 == 0 && mode2 == 0)
				{
					result.push_back("yes");
				}
			}
		}
		mode1 = 0;
		mode2 = 0;
	}
	for (int i = 0; i < result.size(); i++)
	{
		cout << result[i] << endl;
	}

	return 0;
}