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

	string str1;
	string str2;
	int finish = 0;
	int max = 0;
	
	getline(cin, str1);
	string temp;
	temp = str1[0];

	for (int i = 0; i <= str1.size(); i++)
	{
		if (i != 0)
		{
			if (temp == "0" && finish == 0)
			{
				finish = 0;
			}
			else if (temp == "0" && finish == 1)
			{
				finish = 0;
				num1++;
			}
			else if (temp == "1" && finish == 0)
			{
				finish = 1;
				num2++;
			}
			else if (temp == "1" && finish == 1)
			{
				finish = 1;
			}
		}
		else {
			if (temp == "0")
			{
				finish = 0;
				num1++;
			}
			if (temp == "1")
			{
				finish = 1;
				num2++;
			}
		}

		temp = str1[i];

	}


	if (num1 > num2)
	{
		cout << num2 << endl;
	}
	else {
		cout << num1 << endl;
	}
	

	return 0;
}


