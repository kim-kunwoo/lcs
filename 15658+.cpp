#include<iostream>

#define endl "\n"
#define MAX 11
using namespace std;

int Max_Value = -1000000001;
int Min_Value = 1000000001;
int N;
int Arr[MAX];
int Plus, Minus, Multiple, Divide;

void Input()
{
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> Arr[i];
	}

	cin >> Plus >> Minus >> Multiple >> Divide;
}

void DFS(int P, int Mi, int Mul, int D, int Sum, int N_Idx)
{
	if (N_Idx == N)
	{
		if (Sum > Max_Value) Max_Value = Sum;
		if (Sum < Min_Value) Min_Value = Sum;
		return;
	}

	if (P < Plus) DFS(P + 1, Mi, Mul, D, Sum + Arr[N_Idx], N_Idx + 1);
	if (Mi < Minus) DFS(P, Mi + 1, Mul, D, Sum - Arr[N_Idx], N_Idx + 1);
	if (Mul < Multiple) DFS(P, Mi, Mul + 1, D, Sum * Arr[N_Idx], N_Idx + 1);
	if (D < Divide) DFS(P, Mi, Mul, D + 1, Sum / Arr[N_Idx], N_Idx + 1);
}

void Solution()
{
	DFS(0, 0, 0, 0, Arr[0], 1);

	cout << Max_Value << endl;
	cout << Min_Value << endl;
}

void Solve()
{
	Input();
	Solution();
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	//freopen("Input.txt", "r", stdin);
	Solve();

	return 0;
}

