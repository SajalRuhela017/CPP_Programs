/**
 *		author : ujjwalru_224
 *		Sum of n numbers using recurrsion
**/

#include <bits/stdc++.h>
using namespace std;

long long sum = 0;

int addition(int n)
{
	if(n == 0)
	{		
		return 0;
	}	
	return n + addition(n - 1);
}

int main()
{
	int n = 10;
	cout << addition(n);
	return 0;
}
