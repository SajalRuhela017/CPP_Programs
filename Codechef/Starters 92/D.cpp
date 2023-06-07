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
        int n, k, ans = 0, sum = 0;
        cin >> n >> k;
        vector<int> v(n);
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
            sum += v[i];
        }
        int l = 0, r = sum;
        while(l <= r)
        {
            int mid = (l + r) / 2, candies = 0;
            for(int i = 0; i < n; i++)
                candies += min(v[i], mid);
            if(candies >= mid * k)
                l = mid + 1;
            else
                r = mid - 1;
        }
        cout << r << '\n';        
    }
    return 0;
}