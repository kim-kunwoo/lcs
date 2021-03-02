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
long long arr[1000001] = { 0 };
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
	arr[0] = 1;
	arr[1] = 2;
	arr[2] = 4;
	for (int i = 3; i < 1000001; i++)
	{
		arr[i] = arr[i - 3] + arr[i - 2] + arr[i - 1];
		arr[i] = arr[i] % MAXNUMBER;
	}
	vector<int>::iterator it;
	for (it = save.begin(); it != save.end(); it++)
	{
		long long result = arr[*it - 1];
		cout << result << endl;
	}

	return 0;
}