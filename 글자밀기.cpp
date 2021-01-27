#include<vector>
#include<set>
#include<iostream>
#include<cstdlib>
#include<string>

using namespace std;

int main()
{
	string str1;
	getline(cin, str1);
	int temp1 = 0;
	vector<char>result;

	for (int i = 0; i < str1.size(); i++)
	{
		
		if (str1[i] >= 97 && str1[i] <= 122)
		{
			temp1 = str1[i] - 96;
			if (temp1 + 12 >= 26)
			{
				char push = (1 + 12 - (26 - temp1))+96;
				result.push_back(push);
			}
			else {
				char push = (temp1 + 12 + 1) + 96;
				result.push_back(push);
			}
		}
		else if (str1[i] >= 65 && str1[i] <= 90)
		{
			temp1 = str1[i] - 64;
			if (temp1 + 12 >= 26)
			{
				char push = (1 + 12 - (26 - temp1))+64;
				result.push_back(push);
			}
			else {
				char push = (temp1 + 12 + 1) +64;
				result.push_back(push);
			}
		}
		else {
			result.push_back(str1[i]);
		}
		
	}

	for (int i = 0; i < result.size(); i++)
	{
		cout << result[i];
	}
	cout << endl;

	return 0;
}