#include<vector>
#include<set>
#include<iostream>
#include<cstdlib>
#include<string>
#include<map>
#include<algorithm>
#include<cstdio>
using namespace std;

long long cal[1000001];

int main()
{
	cal[1] = 1;
	for (int i = 2; i <= 1000001; i++)
	{
		for (int j = 1; i*j <= 1000001; j++)
		{
			cal[i*j] += i;
		}
		cal[i] += (cal[i - 1] + 1);
	}

	int n;
	scanf("%d", &n);
	while (n--) {

		int num;
		scanf("%d", &num);
		printf("%lld\n", cal[num]);

	}

	return 0;
}