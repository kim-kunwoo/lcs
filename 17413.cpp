#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

int main() {

	vector<string> save;
	int n;
	vector<string> result;
	vector<string>::iterator iter = result.begin();
	string temp;
	string str1;
	int num = 0;
	getline(cin, temp);
	int j = 0;
	int mod = 0;
	for (int i = 0; i <= temp.size(); i++)
	{
		if (temp[i] == '<')
		{
			if (mod == 0 && i != 0 && temp[i-1] != '>')
			{
				str1 = temp.substr(j, i - j);
				j = i;
				reverse(str1.begin(), str1.end());
				save.push_back(str1);
			}
			mod = 1;

		}
		if (temp[i] == ' ')
		{
			if (mod == 0)
			{
				str1 = temp.substr(j, i - j);
				j = i + 1;
				reverse(str1.begin(), str1.end());
				save.push_back(str1);
			}
		
		}
		if (temp[i] == '>')
		{
			str1 = temp.substr(j, i - j+1);
			j = i+1;
			save.push_back(str1);
			mod = 0;
		}
		if (temp[i] == '\0')
		{
			if (j != i)
			{
				str1 = temp.substr(j);
				reverse(str1.begin(), str1.end());
				save.push_back(str1);
			}			
		}
	}


	for (int i = 0; i < save.size(); i++)
	{
		cout << save[i];
		if (i != save.size() - 1 && save[i][save[i].size()-1] != '>' && save[i+1][0] != '<')
		{
			cout << " ";
		}
		
	}
	cout << endl;

	return 0;

}