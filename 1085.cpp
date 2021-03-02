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
	int x;
	int y;
	int w;
	int h;
	scanf("%d", &x);
	scanf("%d", &y);
	scanf("%d", &w);
	scanf("%d", &h);

	int min1;
	int min2;
	if (x - 0 > w - x)
	{
		min1 = w-x;
	}
	else {
		min1 = x;
	}
	if (y - 0 > h - y)
	{
		min2 = h - y;
	}
	else {
		min2 = y;
	}

	int result;
	if (min1 > min2)
	{
		result = min2;
	}
	else {
		result = min1;
	}
	printf("%d\n", result);

	return 0;
}
