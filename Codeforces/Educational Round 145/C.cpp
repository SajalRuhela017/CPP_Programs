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
    int t, k = 1;
    cin >> t;
    while(t--)
    {
        int n, k, mn = -1000;
        cin >> n >> k;
        vector<int> ans(n , mn);
        int left = -1 * n;
        for(int i = 0; i + 1 < n && k > 0; i++)
        {
            ans[i] = min(n - i - 1 , k);
            left += ans[i];
            k -= ans[i];
        }
        ans[n - 1] = -1 * left;
        for(auto &i : ans)
            cout << i << " ";
        cout << "\n";
    }
    return 0;
}