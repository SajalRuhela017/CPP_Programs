/**
 *		author : rhsajal_017
**/

#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while(t--)
	{
		long long m, n, sum = 0, j = 0, ans = 0;
		cin >> m >> n;
		long long a[n];
		for(int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		for(int i = 1; i <= m; i++)
		{
			if(a[j] != i)
			{
				sum += i;
				if(sum <= m)
				{
					ans++;
				}
				else
				{
					break;
				}
			}
			else
			{
				j++;
			}
		}
		cout << ans << endl;
	}
	return 0;
}
