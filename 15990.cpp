#include<vector>
#include<set>
#include<iostream>
#include<cstdlib>
#include<string>
#include<cstdio>
#include<queue>
#include<algorithm>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
using namespace std;
#define MAXNUMBER 1000000009;
long long arr[1000001][4];
int main()
{
	int N;
	scanf("%d", &N);
	int num;
	vector<int>save;
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &num);
		save.push_back(num);
	}
	arr[1][1] = arr[2][2] = arr[3][1] = arr[3][2] = arr[3][3] = 1;

	for (int i = 4; i < 1000001; i++)
	{
		arr[i][1] = (arr[i - 1][2] + arr[i - 1][3]) % MAXNUMBER;
		arr[i][2] = (arr[i - 2][1] + arr[i - 2][3]) % MAXNUMBER;
		arr[i][3] = (arr[i - 3][1] + arr[i - 3][2]) % MAXNUMBER;
	}

	vector<int>::iterator it;
	for (it = save.begin(); it != save.end(); it++)
	{
		long long result = (arr[*it][1] + arr[*it][2] + arr[*it][3]) % MAXNUMBER;
		cout << result << endl;
	}

	return 0;
}