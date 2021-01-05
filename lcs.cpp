// lcs.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
	
	char str1[1000];
	cin.getline(str1, 1000);
	int arr[1000][1000] = { 0 };
	char str2[1000];
	cin.getline(str2, 1000);

	char str3[1000] = { 0 };

	int result = 0;
	int temp1 = 0;
	int temp2 = 0;
	int temp3 = 0;

	for (int i = temp1; i <= strlen(str1)-1; i++)
	{
		for (int j = temp2; j <= strlen(str2) - 1; j++)
		{
			
			if (str1[i] == str2[j])
			{
				if (i == 0 && j == 0)
				{
					arr[i][j] = arr[i][j] + 1;
				}
				else if (i == 0 || j == 0)
				{
					arr[i][j]++;
				}

				else {
					arr[i][j] = arr[i - 1][j - 1] + 1;
				}

			}
			else if(i != 0) {
				if (arr[i - 1][j] > arr[i][j - 1])
				{
					arr[i][j] = arr[i - 1][j];
				}
				else
				{
					arr[i][j] = arr[i][j - 1];
				}
			}
			else {
				if (i == 0 && j == 0)
				{
					arr[i][j] = 0;
				}
				else {
					arr[i][j] = arr[i][j - 1];
				}
			}
		}
	}

	printf("%d\n", arr[strlen(str1)-1][strlen(str2)-1]);

    return 0;
}

