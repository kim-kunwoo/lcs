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

	int finish = 0;
	int num = 0;

	string temp1;
	string temp2;
	
	for (int i = 0; i <= str1.size(); i++)
	{
		
		if (str1[i] == ' ')
		{
			temp1 = str1.substr(0, i);
			num = i;
		}
		if (i == str1.size())
		{
			temp2 = str1.substr(num+1, i-num);

		}
	}
	reverse(temp1.begin(), temp1.end());
	reverse(temp2.begin(), temp2.end());

	num1 = stoi(temp1);
	num2 = stoi(temp2);

	finish = num1 + num2;

	string result = to_string(finish);
	reverse(result.begin(), result.end());

	finish = stoi(result);

	cout<<finish<< endl;
	return 0;
}


