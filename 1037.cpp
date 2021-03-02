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

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &M);
		save.insert(M);
	}
	long long int a;
	long long int b;
	long long int result;
	if (save.size() == 1)
	{
		a = *save.begin();
		result = a*a;
	}
	else {
		set<int>::iterator it;
		it = save.begin();
		if (it == save.begin())
		{
			a = *it;
		}
		it = save.end();
		it--;
		
		b = *it;
		
		result = a * b;
	}

	printf("%lld\n", result);

	return 0;
}
