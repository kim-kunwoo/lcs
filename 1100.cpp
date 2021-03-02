#include<vector>
#include<stack>
#include<iostream>
#include<cstdlib>
#include<string>
#include<cstdio>
#include<queue>
#include<algorithm>
#include<set>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
using namespace std;

int main()
{
	string x;
	int chess[8][8] = {1,0,1,0,1,0,1,0,
		0,1,0,1,0,1,0,1,
		1,0,1,0,1,0,1,0,
		0,1,0,1,0,1,0,1,
		1,0,1,0,1,0,1,0,
		0,1,0,1,0,1,0,1,
		1,0,1,0,1,0,1,0,
		0,1,0,1,0,1,0,1 };

	char input[9][9] = { "\0" };

	for (int i = 0; i < 8; i++)
	{
		
		getline(cin, x);
		for (int j = 0; j < x.size(); j++)
		{
			input[i][j] = x[j];
		}
		
	}
	int count = 0;
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if (input[i][j] == 'F' && chess[i][j] == 1)
			{
				count++;
			}
		}
	}

	printf("%d\n", count);

	return 0;
}
