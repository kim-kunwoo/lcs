#include<vector>
#include<set>
#include<iostream>
#include<cstdlib>
#include<string>
#include<map>
#include<algorithm>
using namespace std;

int main()
{
	multiset<int> save;
	multiset<int> save2;
	vector<char> record;
	string str1 = "";
	int num = 0;
	int m = 0;
	long long int sum = 0;
	long long int result = 0;
	cin >> num;
	for (int i = 0; i < num; i++)
	{
		cin >> m;
		save.insert(m);
	}
	multiset<int>::iterator iter;
	int count = 0;
	if(save.size() == 1)
	{
		result = 0;
	}
	else {
		for (iter = save.begin(); iter != save.end(); iter++)
		{
			if (count <= 1)
			{
				if (count == 0)
				{
					sum = *iter;
				}
				if (count == 1)
				{
					sum = sum + *iter;
					save2.insert(sum);
					save.insert(sum);
				}

			}
			count++;
			if (count == 2)
			{
				count = 0;
			}
		}
		for (iter = save2.begin(); iter != save2.end(); iter++)
		{
			result = *iter + result;

		}
	}


	cout << result << endl;

	return 0;
}