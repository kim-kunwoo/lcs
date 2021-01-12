#include<iostream>
#include<string>
#include<cstdlib>
#include<algorithm>
#include<vector>
#include<cmath>
using namespace std;

int main() {

	string save = { 0 };
	int n = 0;
	int result=0;
	vector<int> count;
	vector<char> str1;
	
	getline(cin, save);
	int trigger = 0;
	
	while (save[n] != '\0')
	{
	

		if (save[n] == '+' && n != 0)
		{
			for (int i = str1.size(); i >= 1; i--)
			{
				char temp = '0';
				temp = str1[str1.size() - i];
				int tempnum = atoi(&temp);
				if (trigger == 0) {
					result = result + pow(10, i - 1) * tempnum;
				}
				if (trigger == 1) {
					result = result - (pow(10, i - 1) * tempnum);
				}
			}
			str1.clear();
		}
		else if (save[n] == '+' && n == 0)
		{
			trigger = 0;
		}
		else if (save[n] == '-' && n != 0)
		{
			if (trigger == 1)
			{
				for (int i = str1.size(); i >= 1; i--)
				{
					char temp = '0';
					temp = str1[str1.size() - i];
					int tempnum = atoi(&temp);
					result = result - (pow(10, i - 1) * tempnum);
				}
				str1.clear();
			}
			else {
				trigger = 1;
				for (int i = str1.size(); i >= 1; i--)
				{
					char temp = '0';
					temp = str1[str1.size() - i];
					int tempnum = atoi(&temp);
					result = result + (pow(10, i - 1) * tempnum);
				}
				str1.clear();
			}
		}
		else if (save[n] == '-' && n == 0)
		{
			trigger = 1;
		}
		else {
			str1.push_back(save[n]);
		}
		n++;
		if (save[n] == '\0' && n != 0)
		{
			for (int i = str1.size(); i >= 1; i--)
			{
				char temp = '0';
				temp = str1[str1.size() - i];
				int tempnum = atoi(&temp);
				if (trigger == 0) {
					result = result + pow(10, i - 1) * tempnum;
				}
				if (trigger == 1) {
					result = result - (pow(10, i - 1) * tempnum);
				}
			}
			str1.clear();
		}
	}

	cout << result << endl;


	return 0;

}