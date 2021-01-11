#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

int main() {

	vector<string> save;
	int n;
	vector<char> result;
	vector<int> count;

	vector<char>::iterator iter = result.begin();

	cin >> n;
	for (int i = 0; i < n+1; i++) {
		string str1 = "";
		getline(cin, str1);
		
		save.push_back(str1);
	}

	for (int i = 0; i < n+1; i++) {

		
			string s1 = save[i];
			string temp = "";
			char chk = '\0';
			int j = 0;
			int num = 1;

			for (int j = i+1; j < n+1; j++)
			{
				string s2 = save[j];
				if (s1[0] == s2[0])
				{
					num++;
				}
				if (num >= 5 && (find(result.begin(), result.end(), s1[0]) != result.end()) == false )
				{
					result.push_back(s1[0]);
				}
			}		
	}

	sort(result.begin(), result.end());

	if (!result.empty())
	{
		for (iter = result.begin(); iter != result.end(); iter++) {
			cout << *iter;
		}
		cout << endl;
	}
	else {
		cout << "PREDAJA" << endl;
	}

	return 0;

}