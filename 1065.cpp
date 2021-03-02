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
	int N;
	int M;
	scanf("%d", &N);
	set<int>save;
	if (N <= 110)
	{
		if (N < 100)
		{
			printf("%d\n", N);
		}
		else {
			printf("99\n");
		}
	}
	else {
		int num = N;
		int a;
		int b;
		int c;
		int count = 0;

		for (int k = N; k >= 111; k--)
		{
			a = k / 100;
			b = (k - a * 100) / 10;
			c = k - ((k / 10) * 10);
			if (a - b == b - c)
			{
				count++;
			}
		}
		count = 99 + count;
		printf("%d\n", count);
	}

	return 0;
}
