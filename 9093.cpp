#include <stdio.h>
#include <string.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>
using namespace std;

string sentence[10001];

int main()
{
	int num = 0;
	cin >> num;

	for (int i = 0; i <= num; i++)
	{
		getline(cin, sentence[i]);	
	}
	for (int i = 0; i <= num; i++)
	{
		int chk = 0;
		int k = 0;
		for (int j = 0; j < sentence[i].size(); j++)
		{

			if (sentence[i][j] == ' ')
			{
				k = chk;
				if (k != 0)
				{
					k = k + 1;
				}
				char temp = '0';
				for (int z = k; z < k + ((j - k) / 2); z++)
				{
					temp = sentence[i][z];
					sentence[i][z] = sentence[i][j - 1 - (z - k)];
					sentence[i][j - 1 - (z - k)] = temp;
				}

				chk = j;
			}
			if (j == sentence[i].size() - 1)
			{
				k = chk;
				if (k != 0)
				{
					k = k + 1;
				}
				char temp = '0';
				for (int z = k; z < k + ((j - k + 1) / 2); z++)
				{
					temp = sentence[i][z];
					sentence[i][z] = sentence[i][j - (z - k)];
					sentence[i][j - (z - k)] = temp;
				}
			}
		}
	}

	for (int i = 1; i <= num; i++)
	{
		cout << sentence[i] << endl;
	}
	return 0;
}
