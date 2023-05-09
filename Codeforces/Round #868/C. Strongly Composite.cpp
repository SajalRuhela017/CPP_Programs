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
        int n, ans = 0, temp = 0;
        cin >> n;
        map<int, int> mp;
        for(int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            for(int j = 2; j * j <= x; j++)
            {
                while(x % j == 0)
                {
                    x /= j;
                    mp[j]++;
                }
            }
            if(x != 1)
                mp[x]++;
        }
        for(auto &i: mp)
        {
            int x = i.second;
            ans += x / 2;
            temp += x % 2;
        }
        cout << ans + temp / 3 << '\n';
    }
    return 0;
}