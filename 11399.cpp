#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

int main() {

	vector<string> save;
	int n;
	vector<int> result;
	vector<int>::iterator iter = result.begin();
	string temp;
	string str1;
	cin >> n;
	int num = 0;
	cin.ignore();
	getline(cin, temp);
	int j = 0;
	for (int i = 0; i <= temp.size(); i++)
	{
		
		if (temp[i] == ' ')
		{
			
			str1 = temp.substr(j, i-j);
			j = i+1;
			num = stoi(str1);
			result.push_back(num);
		}
		if (temp[i] == '\0')
		{
			str1 = temp.substr(j);
			num = stoi(str1);
			result.push_back(num);
		}
	}

	sort(result.begin(), result.end());
	int total = 0;

	for (int i = n-1; i >= 0; i--)
	{
		total= total + result[n-i-1] * (i + 1);
	}
	cout << total << endl;

	return 0;

}