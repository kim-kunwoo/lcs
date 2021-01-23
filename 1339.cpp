#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<cmath>
#include<set>
#include<map>
#include<deque>
using namespace std;

int main() {

	vector<string> save;
	int num1 = 0;
	int num2 = 0;
	cin >> num1;
	multiset<int> save2;
	string str1;
	map<char, int> arr1;
	int arr[11] = { 0 };
	string temp1;
	string temp2;
	long long int sum = 0;
	char TEMP= 'A';
	for (int i = 0; i < 26; i++)
	{
		char alpha = TEMP + i;
		arr1.insert({alpha, 0});
	}

	map<char, int>::iterator iter;
	for (int i = 0; i <= num1; i++)
	{
		getline(cin, str1);
		for (iter = arr1.begin(); iter != arr1.end(); iter++)
		{
			for (int k = 0; k < str1.size(); k++)
			{
				if (str1[k] == iter->first)
				{
					iter->second = iter->second + pow(10, str1.size() - 1 - k);
				}
			}
		}
		save.push_back(str1);
	}
	int max = 0;
	
	for (iter = arr1.begin(); iter != arr1.end(); iter++)
	{
		if (iter->second != 0) {
			save2.insert(iter->second);
		}
	}

	set<int>::iterator iter2 = save2.begin();
	int i = 0;
	for (iter2 = save2.begin(); iter2 != save2.end(); iter2++)
	{
		sum = sum + (*iter2 * (9 - save2.size() + 1 + i));
		i++;
	}



	cout << sum << endl;

	return 0;
}


