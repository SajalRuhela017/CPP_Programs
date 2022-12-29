/**
 *      author : rhsajal_017
**/

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t, k = 1;
    cin >> t;
    while(t--)
    {
        int n, m, k, sum = 0, mx = 0;
        cin >> n >> m >> k;
        vector<int> v(m);
        for(int i = 0; i < m; i++)
        {
            cin >> v[i];
            sum += v[i];
            mx = max(mx , v[i]);
        }
        if(sum > n)
        {
            cout << "NO" << endl;
            continue;
        }
        if(sum == n && mx < n / 2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cut << "NO" << endl;
        }
    }
    return 0;
}