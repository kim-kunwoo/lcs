#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;

int main() {

vector<int> coin;
int num1 = 0;
int num2 = 0;

cin >> num1>>num2;
string str1;
string str2;
cin.ignore();
int finish = 0;
int max = 0;

set<string> s;

for (int i = 1; i <= num1; i++)
{
	getline(cin, str1);
	s.insert(str1);
}

for (int i = 1; i <= num2; i++)
{
	getline(cin, str2);
	if(s.find(str2)!= s.end())
	finish++;
	
}


cout << finish << endl;
	
return 0;
}


