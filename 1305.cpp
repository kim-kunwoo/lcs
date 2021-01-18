/*#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

int main() {

	vector<int> coin;
	int num1 = 0;

	cin >> num1;
	string str1;
	string str2;
	cin.ignore();
	getline(cin, str1);
	int num2 = 0;
	int finish = 0;
	int max = 0;

	num2 = 0;
	string s1;
	string s2;
	
	for (int i = 1; i <= str1.size()-1; i++)
	{
				s1 = str1.substr(0, i);
				s2 = str1.substr(str1.size() - i, i);
				if (s1 == s2)
				{
					num2 = s1.size();
				}
				
				if (max < num2)
				{
						max = num2;
				}
				num2 = 0;

	}
	
	
	cout << num1 - max << endl;


	return 0;

}
*/

#include <iostream>
using namespace std;
int n, pi[1000001];
char s[1000001];

int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> n >> s;
	int j = 0;
	for (int i = 1; i < n; i++) {
		while (s[i] != s[j] && j > 0)j = pi[j - 1];
		if (s[i] == s[j])pi[i] = ++j;
	}
	cout << n - pi[n - 1];
}