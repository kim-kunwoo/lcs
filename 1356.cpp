#include<vector>
#include<set>
#include<iostream>
#include<cstdlib>
#include<string>

using namespace std;

int main()
{
	long long int temp1 = 0;
	long long int temp2 = 0;
	string str1;
	int count = 0;
	getline(cin, str1);
	int k = 1;
	string s;
	string w;
	string result = "1";
	for (int i = 0; i < str1.size()-1; i++)
	{
		
			s = str1.substr(0, k);
			w = str1.substr(i + 1, str1.size() - k);
			k++;
			for (int j = 0; j < s.size(); j++)
			{
				if (j == 0)
				{
					temp1 = s[j]-48;
				}
				else{
					temp1 = temp1 * (s[j] - 48);
				}
			}
			for (int j = 0; j < w.size(); j++)
			{
				if (j == 0)
				{
					temp2 = w[j] - 48;
				}
				else {
					temp2 = temp2 * (w[j] - 48);
				}
			}
			if (temp1 == temp2)
			{
				result = "YES";
				break;
			}
			else {
				temp1 = 0;
				temp2 = 0;
			}
	}

	if (temp1 == 0 && temp2 == 0 && result =="1")
	{
		result = "NO";
	}
	
	cout<<result<< endl;

	return 0;
}