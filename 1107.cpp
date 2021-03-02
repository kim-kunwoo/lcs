#include<vector>
#include<stack>
#include<iostream>
#include<cstdlib>
#include<string>
#include<cstdio>
#include<queue>
#include<algorithm>
#include<set>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
using namespace std;

int main()
{
	string x;
	getline(cin, x);
	int m;
	scanf("%d", &m);
	set<int>b;
	set<int>savep;
	int num;
	string sum;
	for (int i = 0; i < m; i++)
	{
		scanf("%d", &num);
		b.insert(num);
	}
	int n = stoi(x);
	if (n == 100)
	{
		printf("0\n");
		return 0;
	}
	else if (m == 10)
	{
		if (n > 100)
		{
			printf("%d\n", n - 100);
		}
		else {
			printf("%d\n", 100 - n);
		}
		return 0;
	}
	else if (n < 100)
	{
		int min;
		if (100 - n < x.size())
		{
			printf("%d\n", 100 - n);
		}
		else {
			int temp;
			int dir = 0;
			set<int>::iterator it;

			for (int i = 0; i < x.size(); i++)
			{
				temp = x[i] - 48;
				if (b.find(temp) == b.end() && dir == 0)
				{
					string str1;
					str1 = (temp + 48);
					sum = sum + str1;
				}
				else {
					if (dir == 1)
					{
						for (int i = 9; i >= 0; i--)
						{
							if (b.find(i) == b.end())
							{
								string str1;
								temp = i;
								str1 = (temp + 48);
								sum = sum + str1;
								break;
							}
						}
					}
					if (dir == 2) {
						for (int i = 0; i <= 9; i++)
						{
							if (b.find(i) == b.end())
							{
								string str1;
								temp = i;
								str1 = (temp + 48);
								sum = sum + str1;
								break;
							}
						}
					}
					if (dir == 0) {
						int chk1;
						int chk2;
						if (temp == 0)
						{
							chk1 = temp;
							while (b.find(chk1) != b.end())
							{
								chk1++;
							}
							string str1;
							str1 = (chk1 + 48);
							sum = sum + str1;
							dir = 2;
						}
						else {
							chk1 = temp;
							while (b.find(chk1) != b.end())
							{
								chk1++;
							}
							chk2 = temp;
							while (b.find(chk2) != b.end())
							{
								chk2--;
							}
							if (chk1 != 10)
							{
								if (chk1 - temp > temp - chk2) {
									string str1;
									if (chk2 >= 0)
									{
										str1 = (chk2 + 48);
										sum = sum + str1;
										dir = 1;
									}
									else {
										str1 = (chk1 + 48);
										sum = sum + str1;
										dir = 2;
									}
								}
								else {
									string str1;
									str1 = (chk1 + 48);
									sum = sum + str1;
									dir = 2;
								}
							}
							else {
								string str1;
								str1 = (chk2 + 48);
								sum = sum + str1;
								dir = 2;
							}
						}

					}
				}
			}
		}

	}
	else {
		vector<int>b1;
		if (n - 100 < x.size())
		{
			printf("%d\n", n - 100);
		}
		else {

			int temp;
			int dir = 0;
			set<int>::iterator it;

			for (int i = 0; i < x.size(); i++)
			{
				temp = x[i] - 48;
				if (b.find(temp) == b.end() && dir == 0)
				{
					string str1;
					str1 = (temp + 48);
					sum = sum + str1;
				}
				else {
					if (dir == 1)
					{
						for (int i = 9; i >= 0; i--)
						{
							if (b.find(i) == b.end())
							{
								string str1;
								temp = i;
								str1 = (temp + 48);
								sum = sum + str1;
								break;
							}
						}
					}
					if (dir == 2) {
						for (int i = 0; i <= 9; i++)
						{
							if (b.find(i) == b.end())
							{
								string str1;
								temp = i;
								str1 = (temp + 48);
								sum = sum + str1;
								break;
							}
						}
					}
					if (dir == 0) {
						int chk1;
						int chk2;
						if (temp == 0)
						{
							chk1 = temp;
							while (b.find(chk1) != b.end())
							{
								chk1++;
							}
							string str1;
							str1 = (chk1 + 48);
							sum = sum + str1;
							dir = 2;
						}
						else {
							chk1 = temp;
							while (b.find(chk1) != b.end())
							{
								chk1++;
							}
							chk2 = temp;
							while (b.find(chk2) != b.end())
							{
								chk2--;
							}
							if (chk1 != 10)
							{
								if (chk1 - temp > temp - chk2) {
									string str1;
									if (chk2 >= 0)
									{
										str1 = (chk2 + 48);
										sum = sum + str1;
										dir = 1;
									}
									else {
										str1 = (chk1 + 48);
										sum = sum + str1;
										dir = 2;
									}
								}
								else {
									string str1;
									str1 = (chk1 + 48);
									sum = sum + str1;
									dir = 2;
								}
							}
							else {
								string str1;
								str1 = (chk2 + 48);
								sum = sum + str1;
								dir = 1;
							}
						}
					}
				}
			}
		}
	}

	//사이즈 별 계산
	string sum3;
	string sum4;

	if (x.size() == 1)
	{
		int chk1;
		int chk2;
		chk1 = 0;

		while (b.find(chk1) != b.end())
		{
			chk1++;
		}
		if (chk1 == 0)
		{
			int temp = 1;
			while (b.find(temp) != b.end())
			{
				temp++;
			}
			if (temp == 10)
			{
				sum3 = 48;
			}
			else {
				sum3 = (temp + 48);
				string temp1;
				temp1 = chk1 + 48;
				sum3 = sum3 + temp1;
			}
		}
		else {
			for (int i = 0; i < x.size() + 1; i++)
			{
				string temp1;
				temp1 = chk1 + 48;
				sum3 = sum3 + temp1;
			}
		}
	}
	else if (x.size() >= 2 && x.size() <= 5)
	{
		int chk1;
		int chk2;
		chk1 = 0;

		while (b.find(chk1) != b.end())
		{
			chk1++;
		}
		if (chk1 == 0)
		{
			int temp = 1;
			while (b.find(temp) != b.end())
			{
				temp++;
			}
			if (temp == 10)
			{
				sum3 = 48;
			}
			else {
				sum3 = (temp + 48);
			}
			for (int i = 0; i < x.size(); i++)
			{
				string temp1;
				temp1 = chk1 + 48;
				sum3 = sum3 + temp1;
			}
		}
		else {
			for (int i = 0; i < x.size() + 1; i++)
			{
				string temp1;
				temp1 = chk1 + 48;
				sum3 = sum3 + temp1;
			}
		}
		chk2 = 9;
		while (b.find(chk2) != b.end())
		{
			chk2--;
		}
		for (int i = 0; i < x.size() - 1; i++)
		{
			string temp1;
			temp1 = chk2 + 48;
			sum4 = sum4 + temp1;
		}
	}
	else {
		int chk1;
		int chk2;
		chk2 = x[0] - 48;
		while (b.find(chk2) != b.end())
		{
			chk2--;
		}
		if (chk2 >= 0) {
			string temp1;
			temp1 = chk2 + 48;
			sum3 = sum3 + temp1;
		}
		chk2 = 9;
		while (b.find(chk2) != b.end())
		{
			chk2--;
		}
		for (int i = 0; i < 5; i++)
		{
			string temp1;
			temp1 = chk2 + 48;
			sum3 = sum3 + temp1;
		}
	}
	//최소값 계산
	if (sum.size() != 0)
	{

		int sum1 = stoi(sum);
		sum = to_string(sum1);
		int sum2;
		int n2;
		if (100 > n)
		{
			sum2 = 100 - n;
		}
		else {
			sum2 = n - 100;
		}
		if (n > sum1)
		{
			sum1 = n - sum1;
			n2 = n + sum1;
			string temp;
			int min;
			for (int i = n+1; i <= n2; i++)
			{
				temp = to_string(i);
				int count = 0;
				for (int j = 0; j < temp.size(); j++)
				{
					int k = temp[j] - 48;
					if(b.find(k) == b.end())
					{
						count++;
					}
				}
				if (count == temp.size())
				{
					min = i;
					string sub;
					sub = to_string(i);
					if (min - n < sum1)
					{
						sum1 = min - n;
						sum = sub;
					}
					break;
				}
			}
		
		}
		else {
			sum1 = sum1 - n;
			n2 = n - sum1;
			string temp;
			int min;
			for (int i = n - 1; i >= n2; i--)
			{
				temp = to_string(i);
				int count = 0;
				for (int j = 0; j < temp.size(); j++)
				{
					int k = temp[j] - 48;
					if(b.find(k) == b.end())
					{
						count++;
					}
				}
				if (count == temp.size())
				{
					min = i;
					string sub;
					sub = to_string(i);
					if (n - min < sum1)
					{
						sum1 = n - min;
						sum = sub;
					}
					break;
				}
			}
		}
		
		sum1 = sum1 + sum.size();
		savep.insert(sum1);
		savep.insert(sum2);
		int ver1;
		int ver2;
		if (sum3.size() != 0)
		{
			ver1 = stoi(sum3);
			sum3 = to_string(ver1);

			if (100 > n)
			{
				ver2 = 100 - n;
			}
			else {
				ver2 = n - 100;
			}
			if (n > ver1)
			{
				ver1 = n - ver1;
			}
			else {
				ver1 = ver1 - n;
			}
			ver1 = ver1 + sum3.size();
			savep.insert(ver1);
			savep.insert(ver2);
		}
		int ver3;
		int ver4;

		if (sum4.size() != 0)
		{
			ver3 = stoi(sum4);
			sum4 = to_string(ver3);
			if (100 > n)
			{
				ver4 = 100 - n;
			}
			else {
				ver4 = n - 100;
			}
			if (n > ver3)
			{
				ver3 = n - ver3;
			}
			else {
				ver3 = ver3 - n;
			}
			ver3 = ver3 + sum4.size();
			savep.insert(ver3);
			savep.insert(ver4);
		}
		printf("%d\n", *savep.begin());
	}

	return 0;
}
