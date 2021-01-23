#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;

int main() {

	vector<int> coin;
	int num1 = 0;
	int num2 = 0;
	int line[10] = { 0 };
	string str1;
	getline(cin, str1);
	string temp1;
	string temp2;
	long long int sum = 0;
	for (int i = 0; i < str1.size(); i++)
	{
		if (str1[i] == ' ')
		{
			temp1 = str1.substr(0, i);
			temp2 = str1.substr(i + 1, str1.size() - temp1.size());
			break;
		}
	}

	for (int i = 0; i < temp1.size(); i++)
	{
		num1 = temp1[i] - 48;
		for (int j = 0; j < temp2.size(); j++)
		{
			num2 = temp2[j] - 48;
			sum = sum + (num1*num2);
		}
	}
	

	cout <<sum<<endl;

	return 0;
}


