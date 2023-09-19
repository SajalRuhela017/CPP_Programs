/**            ॐ
 *      author : rhsajal_017
**/

#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define int long long
 
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tt, k = 1;
    cin >> tt;
    while(tt--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v(n), fst(k + 1, -1), lst(k + 1, -1), height(k + 1, -1), breadth(k + 1, -1);
        map<vector<int>, int> mp;
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
            if(fst[v[i]] == -1)
                fst[v[i]] = i;
            lst[v[i]] = i;
        }
        vector<int> temp(n);
        int x = v[0], y = v.back();
        int sum = x + y;
        int avg = (int)(x + y) / 2;
        for(int i = 0; i < n; i++)
        {
            breadth[v[i]] = max(i - fst[v[i]] + 1, breadth[v[i]]);
            height[v[i]] = max(lst[v[i]] - i+ 1, height[v[i]]);
        }
        for(int i = 1; i <= k; i++)
            cout << breadth[i] + height[i] - 1 << ' ';
        cout << '\n';
    }
    return 0;
}