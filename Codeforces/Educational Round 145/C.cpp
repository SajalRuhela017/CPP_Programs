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
        int n, k, pos = 0;
        cin >> n >> k;
        vector<int> ans;
        for(int i = 1; i <= n; i++)
        {
            if(pos + i <= k)
            {
                pos += i;
                ans.push_back(2);
            }
            else if(pos < k)
            {
                int left = k - pos;
                pos = INT_MAX;
                int neg = i - 1 - left;
                ans.push_back(-2 * neg - 1);
            }
            else
                ans.push_back(-60);
        }
        for(auto &i: ans)
            cout << i << " ";
        cout << "\n";
    }
    return 0;
}