#include<vector>
#include<set>
#include<iostream>
#include<cstdlib>
#include<string>

using namespace std;

int main()
{
	int n = 0;
	cin >> n;
	int temp1 = 0;
	string str1;
	int count = 0;
	cin.ignore();
	getline(cin, str1);
	set<int> save;
	int k = 0;
	string s;
	for (int i = 0; i < str1.size(); i++)
	{
		if (str1[i] == ' ')
		{
			s = str1.substr(k, i-k);
			temp1 = stoi(s);
			k = i + 1;
			save.insert(temp1);
		}
		if (i == str1.size()-1)
		{
			s = str1.substr(k, str1.size()-k);
			temp1 = stoi(s);
			save.insert(temp1);
		}

	}
	int min = 0;
	int num1 = 0;
	int num2 = 0;
	k = 0;
	set<int>::iterator iter = save.begin();
	set<int>::iterator iter2 = save.end();
	iter2--;
	for (int i =0; i < n; i++)
	{
		num1 = *iter;
		num2 = *iter2;
		k++;
		iter++;
		iter2--;
		if (i == 0)
		{
			min = num1 + num2;
		}
		else if (min > num1 + num2)
		{
			min = num1 + num2;
		}
	}

	
	
	cout <<min<< endl;

	return 0;
}