#include<vector>
#include<set>
#include<iostream>
#include<cstdlib>
#include<string>

using namespace std;

int main()
{
	long long int temp1 = 0;
	long long int temp2 = 0;

	int count = 0;
	cin >> count;
	int l = 0;
	multiset<int>save;
	for (int i = 0; i < count; i++)
	{
		cin >> l;
		save.insert(l);
	}

	set<int>::iterator iter = save.end();
	iter--;
	int k = 1;
	int max = 0;
	int result = 0;
	for (int i = 0; i < count; i++)
	{

		result = (*iter) * k;
		if (max < result)
		{
			max = result;
		}
		iter--;
		k++;
	}
	cout << max << endl;
	
	return 0;
}