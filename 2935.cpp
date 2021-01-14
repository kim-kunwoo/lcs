#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

int main() {

	vector<string> save;
	string n, m;
	vector<char> result;
	vector<char>::iterator iter = result.begin();
	string temp;
	string str1;
	cin >> n;
	int num = 0;
	cin.ignore();
	int n1, n2 = 0;
	int m1, m2 = 0;
	
	n1 = n.size()-1;
	n2 = n.size();

	getline(cin, temp);
	int j = 0;
	for (int i = 0; i <= temp.size(); i++)
	{

		if (temp[i] == '+')
		{
			j = 1;
		}
		if (temp[i] == '*')
		{
			j = 2;
		}
	}

	cin >> m;

	m1 = m.size() - 1;
	m2 = m.size();

	double total = 0;

	if (j == 1)
	{
		if (m2 == n2)
		{
			for (int i = 0; i <= m1; i++)
			{
				if (i == 0)
				{
					result.push_back('2');
				}
				else {
					result.push_back('0');
				}

			}
		}
		else {
			if (m2 > n2)
			{
				for (int i = 0; i <= m1; i++)
				{
					if (i == 0)
					{
						result.push_back('1');
					}
					else if (i == m1 - n1)
					{
						result.push_back('1');
					}
					else {
						result.push_back('0');
					}
				}
			}
			else {
				for (int i = 0; i <= n1; i++)
				{
					if (i == 0)
					{
						result.push_back('1');
					}
					else if (i == n1 - m1)
					{
						result.push_back('1');
					}
					else {
						result.push_back('0');
					}
				}
			}
		}
	}
	if (j == 2)
	{
	
		for (int i = 0; i < m2+n2-1; i++)
		{
				
			if (i == 0)
			{
					result.push_back('1');
			}
			else {
					result.push_back('0');
			}
		}
	
	}

	
	for (iter = result.begin(); iter != result.end(); iter++)
	{
		cout << *iter;
	}
	cout << endl;
	return 0;

}