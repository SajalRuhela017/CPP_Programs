#include <iostream>
using namespace std;

int main()
{
	int n,i = 0;
	cin >> n;
	int b[n];
	while(n--)
	{
		int x = n,count=0;
		while(x > 0)
		{
			count++;
			n = n & (n - 1);
		}
		b[i] = count;
		i++;
	}	
	for(int j=0;j<i;j++)
	{
		cout << b[i] << " ";
	}
}
