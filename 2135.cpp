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

	for (int i = 0; i < str1.size(); i++)
	{
		num1 = str1[i];
		if (num1 >= 97 && num1 <= 122)
		{
			num1 = num1 - 96;
		}
		if (num1 >= 65 && num1 <= 90)
		{
			num1 = num1 - 38;
		}
		num2 = num2 + num1;
	}
	for (int i = 1; i <= num2; i++)
	{
		if (num2 == 1)
		{
			cout << "It is a prime word.";
			break;
		}
		else {
			if (num2%i==0 && i != num2 && i != 1)
			{
				cout << "It is not a prime word.";
				break;
			}
			if (num2%i == 0 && i == num2)
			{
				cout << "It is a prime word.";
			}
		}
	}
	cout << endl;
	
	return 0;
}


