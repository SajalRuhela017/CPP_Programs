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
        int n, ans = 0;
        cin >> n;
        vector<int> x(n), y(n), diff;
        for(int i = 0; i < n; i++)
            cin >> x[i];
        for(int i = 0; i < n; i++)
        {
            cin >> y[i];
            diff.push_back(y[i] - x[i]);
        }
        sort(diff.begin() , diff.end());
        int i = 0, j = n - 1;
        while(i < j)
        {
            if(diff[i] + diff[j] < 0)
                i++;
            else
            {
                if(i >= j)
                    break;
                ans++ , i++;
                j--;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}