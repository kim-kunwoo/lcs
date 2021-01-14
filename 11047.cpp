#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

int main() {

	vector<int> coin;
	int num1 = 0;
	int num2 = 0;
	cin >> num1 >> num2;
	vector<int>::iterator iter;

	for (int i = 0; i < num1; i++)
	{
		int temp = 0;
		cin >> temp;
		coin.push_back(temp);
	}
	int result = 0;
	int temp = num2;
	if (num1 == 1)
	{
		iter = coin.begin();
	}
	else {
		iter = coin.end() - 1;
	}
	while(temp > 0)
	{
		if (temp == 0)
		{
			if (result == 0)
			{
				result++;
				break;
			}
			result++;
			break;
		}
		if (temp > 0)
		{
			temp = temp - *iter;
			result++;
			while (temp > 0)
			{
				temp = temp - *iter;
				result++;
			}
			if (temp < 0)
			{
				temp = temp + *iter;
				result--;
			}
		}
		if (iter != coin.begin())
		{
			iter--;
		}
	}


	cout <<result<<endl;

	return 0;

}