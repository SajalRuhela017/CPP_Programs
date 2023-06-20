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
        int n, k, g;
        cin >> n >> k >> g;
        vector<int> temp;
        priority_queue<int> pq;
        int silver = k * g, factor = (g + 1) / 2LL - 1LL;
        if(silver <= (factor * n))
        {
            cout << silver << '\n';
            continue;
        }
        map<int, int> mp;
        int x = (n - 1LL) * factor, bonus = silver - x;
        int y = n * factor;
        if(bonus % g >= (g + 1LL) / 2)
            bonus += (g - (bonus) % g);
        else
            bonus -= (bonus % g);
        cout << silver - bonus << '\n';
    }
    return 0;
}