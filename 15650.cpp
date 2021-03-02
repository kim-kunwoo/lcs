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

int main()
{
	int N;
	int M;
	scanf("%d", &N);
	scanf("%d", &M);
	deque<int> save;
	deque<int>::iterator it;
	int sum = 0;
	int num = 1;
	int a = 1;
	for (int i = 0; i < M; i++)
	{
		save.push_back(a);
		a++;
	}
	for (it = save.begin(); it != save.end(); it++)
	{
		printf("%d ", *it);
	}
	printf("\n");
	int n = N;
	
	if (N != 1)
	{
		while (sum != 1)
		{
			if (save.back() != N)
			{
				int k = save.back();
				k++;
				save.pop_back();
				save.push_back(k);
				for (it = save.begin(); it != save.end(); it++)
				{
					printf("%d ", *it);
				}
				printf("\n");
			}
			else if(M != N){
				num = 1;
				n = N;
				while (save.back() >= n)
				{
					if (save.back() == n)
					{
						n--;
					}
					num++;
					save.pop_back();
				}
				int k = save.back();
				k++;
				save.pop_back();
				for (int i = 0; i < num; i++)
				{
					save.push_back(k);
					k++;
				}
				for (it = save.begin(); it != save.end(); it++)
				{
					printf("%d ", *it);
				}
				printf("\n");

			}
			it = save.begin();

			if (*it == N-M+1)
			{
				*it += M - 1;
				if (*it == N)
				{
					sum = 1;
				}
			}
		}
	}

	return 0;
}