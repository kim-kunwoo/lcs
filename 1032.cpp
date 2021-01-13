#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

int main() {

	vector<string> save;
	int n;
	vector<char> result;
	int arr[5] = { 0 };
	int count = 1;
	vector<char>::iterator iter = result.begin();

	cin >> n;

	for (int i = 0; i <= n; i++)
	{
		string temp;
		getline(cin, temp);
		save.push_back(temp);
	}
	
	for (int j = 0; j <= save[1].size(); j++)
	{
		char temp = '0';
		temp = save[1][j];
		for (int i = 2; i <= n; i++)
		{
			if (temp == save[i][j])
			{
				count++;
			}
			
		}
		if (n > count)
		{
			result.push_back('?');
			count = 1;
		}
		if (n == count && temp != '.' && temp !='\0')
		{
			result.push_back(save[1][j]);
			count = 1;
		}
		if (n == count && temp == '.' && temp != '\0')
		{
			result.push_back(save[1][j]);
			count = 1;
		}
	
	}
	
	for (iter = result.begin(); iter != result.end(); iter++)
	{
		cout << *iter;
	}
	cout << endl;

	return 0;

}