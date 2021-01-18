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
	int line[10] = { 0 };
	cin >> num1;
	cin.ignore();
	int finish = 0;
	int max = 0;

	for (int i = 0; i < num1; i++)
	{
		cin >> num2;
		for (int j = 0; j < num1; j++)
		{
			if (num2 == 0 && line[j] == 0)
			{
				line[j] = i + 1;
				break;
			}
			else if (line[j] == 0)
			{
				num2--;
			}
		}
	}


	
	
	for (int i = 0; i < num1; i++) {
		cout << line[i] <<" ";
	}
	cout << endl;
	return 0;
}


