#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;

int main() {
	vector<int> savenum;

	vector<string> save;
	int num1 = 0;
	int num2 = 0;
	int line[10] = { 0 };
	
	int finish = 0;
	int num = 0;
	int max = 0;
	string temp1;
	string temp2;
	
	for (int i = 0; i < 3; i++)
	{
		string str1;
		getline(cin, str1);
		save.push_back(str1);
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < save[i].size(); j++)
		{
			if (j == 0)
			{
				temp1 = save[i][j];
				num++;
			}
			else {
				if (temp1[0] == save[i][j])
				{
					num++;
				}
				else {
					temp1 = save[i][j];
					num = 1;
				}
			}
			if (max < num)
			{
				max = num;
			}
		}
		savenum.push_back(max);
		max = 0;
		num = 0;
	}
	for (int j = 0; j < savenum.size(); j++)
	{
		cout << savenum[j] << endl;
	}
	return 0;
}


