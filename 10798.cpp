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

	vector<char>::iterator iter = result.begin();


	for (int i = 0; i<5; i++) {
		string str1 = "";
		getline(cin, str1);
		arr[i] = i + 1;
		save.push_back(str1);
	}

	for (int i = 0; i < 15; i++) {
		
		for(int k = 0; k < 5; k++)
		{ 
			if (arr[k] != 0) {
				string s = save[k];
				string temp = "";
				char chk = '\0';
				int j = 0;

				if (s[i] == chk) {
					arr[k] = 0;
				}
				if (s[i] != chk)
				{
					result.push_back(s[i]);
				}
			}
		}
	
	}
	for (iter = result.begin(); iter != result.end(); iter++) {
		cout << *iter;
	}
	cout << endl;
	return 0;

}