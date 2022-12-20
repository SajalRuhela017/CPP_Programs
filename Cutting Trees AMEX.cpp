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
		long long k, m, trees = 1, a = 0;
		cin >> k >> m;
		vector<int> v;
		v.push_back(2);
		for(int i = 1; i<= k; i++)
		{
			int x = (v[a] + 1) % m;
			trees += x;
			v.erase(v.begin() , v.begin() + 1);
			for(int j = 0; j < x; j++)
			{
				v.push_back(j);
			}
		}
		trees -= k;
		cout << trees << endl;
	}
	return 0;
}
