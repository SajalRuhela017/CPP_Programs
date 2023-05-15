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
        int n, sum = 0;
        cin >> n;
        vector<int> ans(n);
        for(int i = 1; i < n; i++)
        {
            ans[i] = i + 1;
            sum += (i + 1);
        }
        ans[0] = n - sum % n;
        for(auto i: ans)
            cout << i << ' ';
        cout << '\n';
    }
    return 0;
}