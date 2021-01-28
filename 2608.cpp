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
	string str2;
	int count = 0;
	getline(cin, str1);
	getline(cin, str2);
	int k = 1;
	string s;
	string w;
	string result = "1";
	int sum1 = 0;
	int sum2 = 0;
	for (int i = 0; i < str1.size(); i++)
	{
		if (str1[i] == 'I')
		{
			if (str1[i + 1] == 'V')
			{
				sum1 = sum1 + 4;
				i++;
				continue;
			}
			if (str1[i + 1] == 'X')
			{
				sum1 = sum1 + 9;
				i++;
				continue;
			}
			if (str1[i + 1] == 'I')
			{
				if (str1[i + 2] == 'I')
				{
					sum1 = sum1 + 3;
					i += 2;
					continue;
				}
				sum1 = sum1 + 2;
				i++;
				continue;
			}
			sum1 = sum1 + 1;
		}
		if (str1[i] == 'V')
		{
			sum1 = sum1 + 5;
		}
		if (str1[i] == 'X')
		{
			if (str1[i + 1] == 'L')
			{
				sum1 = sum1 + 40;
				i++;
				continue;
			}
			if (str1[i + 1] == 'C')
			{
				sum1 = sum1 + 90;
				i++;
				continue;
			}
			if (str1[i + 1] == 'X')
			{
				if (str1[i + 2] == 'X')
				{
					sum1 = sum1 + 30;
					i += 2;
					continue;
				}
				sum1 = sum1 + 20;
				i++;
				continue;
			}
			sum1 = sum1 + 10;
		}
		if (str1[i] == 'L')
		{
			sum1 = sum1 + 50;
		}
		if (str1[i] == 'C')
		{
			if (str1[i + 1] == 'D')
			{
				sum1 = sum1 + 400;
				i++;
				continue;
			}
			if (str1[i + 1] == 'M')
			{
				sum1 = sum1 + 900;
				i++;
				continue;
			}
			if (str1[i + 1] == 'C')
			{
				if (str1[i + 2] == 'C')
				{
					sum1 = sum1 + 300;
					i += 2;
					continue;
				}
				sum1 = sum1 + 200;
				i++;
				continue;
			}
			sum1 = sum1 + 100;
		}
		if (str1[i] == 'D')
		{
			sum1 = sum1 + 500;
		}
		if (str1[i] == 'M')
		{
			sum1 = sum1 + 1000;
		}
	}
	for (int i = 0; i < str2.size(); i++)
	{
		if (str2[i] == 'I')
		{
			if (str2[i + 1] == 'V')
			{
				sum2 = sum2 + 4;
				i++;
				continue;
			}
			if (str2[i + 1] == 'X')
			{
				sum2 = sum2 + 9;
				i++;
				continue;
			}
			if (str2[i + 1] == 'I')
			{
				if (str2[i + 2] == 'I')
				{
					sum2 = sum2 + 3;
					i += 2;
					continue;
				}
				sum2 = sum2 + 2;
				i++;
				continue;
			}
			sum2 = sum2 + 1;
		}
		if (str2[i] == 'V')
		{
			sum2 = sum2 + 5;
		}
		if (str2[i] == 'X')
		{
			if (str2[i + 1] == 'L')
			{
				sum2 = sum2 + 40;
				i++;
				continue;
			}
			if (str2[i + 1] == 'C')
			{
				sum2 = sum2 + 90;
				i++;
				continue;
			}
			if (str2[i + 1] == 'X')
			{
				if (str2[i + 2] == 'X')
				{
					sum2 = sum2 + 30;
					i += 2;
					continue;
				}
				sum2 = sum2 + 20;
				i++;
				continue;
			}
			sum2 = sum2 + 10;
		}
		if (str2[i] == 'L')
		{
			sum2 = sum2 + 50;
		}
		if (str2[i] == 'C')
		{
			if (str2[i + 1] == 'D')
			{
				sum2 = sum2 + 400;
				i++;
				continue;
			}
			if (str2[i + 1] == 'M')
			{
				sum2 = sum2 + 900;
				i++;
				continue;
			}
			if (str2[i + 1] == 'C')
			{
				if (str2[i + 2] == 'C')
				{
					sum2 = sum2 + 300;
					i += 2;
					continue;
				}
				sum2 = sum2 + 200;
				i++;
				continue;
			}
			sum2 = sum2 + 100;
		}
		if (str2[i] == 'D')
		{
			sum2 = sum2 + 500;
		}
		if (str2[i] == 'M')
		{
			sum2 = sum2 + 1000;
		}
	}

	cout << sum1 + sum2 << endl;
	int sum = sum1 + sum2;
	vector<string> save;
	while (sum != 0)
	{
		if (sum >= 1000)
		{
			sum = sum - 1000;
			save.push_back("M");
			continue;
		}
		else if (sum >= 900)
		{
			sum = sum - 900;
			save.push_back("CM");
			continue;
		}
		else if (sum >= 500)
		{
			sum = sum - 500;
			save.push_back("D");
			continue;
		}
		else if (sum >= 400)
		{
			sum = sum - 400;
			save.push_back("CD");
			continue;
		}
		else if (sum >= 100)
		{
			sum = sum - 100;
			save.push_back("C");
			continue;
		}
		else if (sum >= 90)
		{
			sum = sum - 90;
			save.push_back("XC");
			continue;
		}
		else if (sum >= 50)
		{
			sum = sum - 50;
			save.push_back("L");
			continue;
		}
		else if (sum >= 40)
		{
			sum = sum - 40;
			save.push_back("XL");
			continue;
		}
		else if (sum >= 10)
		{
			sum = sum - 10;
			save.push_back("X");
			continue;
		}
		else if (sum >= 9)
		{
			sum = sum - 9;
			save.push_back("IX");
			continue;
		}
		else if (sum >= 5)
		{
			sum = sum - 5;
			save.push_back("V");
			continue;
		}
		else if (sum >= 4)
		{
			sum = sum - 4;
			save.push_back("IV");
			continue;
		}
		if (sum >= 1)
		{
			sum = sum - 1;
			save.push_back("I");
			continue;
		}

	}
	for (int i = 0; i < save.size(); i++)
	{
		cout << save[i];
	}
	cout << endl;

	return 0;
}