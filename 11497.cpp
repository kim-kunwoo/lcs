#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<cstdlib>
#include<set>
#include<deque>
using namespace std;

int main() {
	vector<int> savenum;
	int testcase = 0;
	cin >> testcase;
	
	vector<int> result;

	for (int i = 0; i < testcase; i++)
	{
		multiset<int> cal;
		deque<int> cal2;
		int num1 = 0;
		cin >> num1;
		int num = 0;
		for (int j = 0; j < num1; j++)
		{
			cin >> num;
			cal.insert(num);
		}
		int direction = 0;
		while (cal.size() != 0)
		{
			
			int chk = 0;
			chk = cal.size() - 1;
			int max = 0;
			set<int>::iterator iter;
			iter = cal.end();
			iter--;
			max = *iter;
			if (direction == 0) {
				cal2.push_front(max);
				direction++;
			}
			else {
				cal2.push_back(max);
				direction--;
			}
			cal.erase(iter);

		}
		int max = abs(cal2[0] - cal2[cal2.size()-1]);
		for (int k = 0; k < cal2.size()-1; k++)
		{
			if (max < abs(cal2[k] - cal2[k + 1]))
			{
				max = abs(cal2[k] - cal2[k + 1]);
			}
		}
		result.push_back(max);
	}

	for (int k = 0; k < result.size(); k++)
	{
		cout << result[k] << endl;
	}
	
	return 0;
}



