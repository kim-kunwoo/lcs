#include<vector>
#include<set>
#include<iostream>
#include<cstdlib>
#include<string>

using namespace std;

int main()
{
	string str1;
	string str2;

	getline(cin, str1);
	getline(cin, str2);

	int temp1 = 0;
	int temp2 = 0;
	vector<char>result;

	for (int i = 0; i < str1.size(); i++)
	{
		if (str1[i] == ' ')
		{
			result.push_back(' ');
			continue;
		}
		temp1 = str1[i] - 96;
		temp2 = str2[i%str2.size()] - 96;

		if (temp1 < temp2) {
			char push = temp1 - temp2 + 26 + 96;
			result.push_back(push);
		}
		else if(temp1== temp2){
			result.push_back('z');
		}
		else {
			char push = temp1 - temp2 + 96;
			result.push_back(push);
		}
	}

	for (int i = 0; i < result.size(); i++)
	{
		cout << result[i];
	}
	cout << endl;

	return 0;
}