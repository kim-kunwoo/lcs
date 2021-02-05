#include<vector>
#include<set>
#include<iostream>
#include<cstdlib>
#include<string>
#include<stack>
#include<map>
#include<algorithm>
using namespace std;

int main()
{

	vector<string> result;
	vector<int> save;
	int save2[1001] = { 1 };
	string str1 = "";
	int num = 0;
	int max = 0;
	string str2 = "";
	int case1 = 1;
	cin >> num;
	int k = 0;
	cin.ignore();
	getline(cin, str1);
	for (int i = 0; i < str1.size(); i++)
	{
			if (str1[i] == ' ')
			{
				str2 = str1.substr(k, i - k);
				k = i + 1;
				int n = stoi(str2);
				save.push_back(n);
			}
			if (i == str1.size() - 1)
			{
				str2 = str1.substr(k, str1.size() - k);
				int n = stoi(str2);
				save.push_back(n);
			}
	}
	int count = 1;
	int start = 0;
	int mod = 0;
	int point = 0;
	for (int i = 0; i < num; i++)
	{
		save2[i] = count;
	}
	for (int i = 0; i < num; i++)
	{
		start = save[i];
		count = save2[i];
		for (int j = i + 1; j < num; j++)
		{
			if (save[i] > save[j])
			{
				count++;
				if (save2[j] < count)
				{
					save2[j] = count;
				}
			}
			count = save2[i];
		}

	}
	for (int i = 0; i < num; i++)
	{
	
		if (max < save2[i])
		{
			max = save2[i];
		}
	}



	cout << max << endl;

	return 0;
}