/**            ॐ
 *      author : rhsajal_017
**/

#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define int long long

bool setBit(int n, int i)
{
    return (n >> i) & 1;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tt, k = 1;
    cin >> tt;
    while(tt--)
    {
        int x, p;
        cin >> x;
        vector<int> ans;
        ans.push_back(x);
        for(int i = 0; ; i++)
        {
            if(setBit(x, i))
            {
                if(x == (1 << i))
                {
                    p = i;
                    break;
                }
                x -= (1 << i);
                ans.push_back(x);
            }
        }
        while(p > 0)
        {
            x -= (1 << (p - 1));
            ans.push_back(x);
            p--;
        }
        cout << ans.size() << '\n';
        for(auto i: ans)
            cout << i << ' ';
        cout << '\n';
    }
    return 0;
}