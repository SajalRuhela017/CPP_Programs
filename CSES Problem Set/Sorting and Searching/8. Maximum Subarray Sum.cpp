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
    int n, curr_sum = 0, mx = INT_MIN;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
        curr_sum += v[i];
        mx = max(mx, curr_sum);
        if(curr_sum < 0)
            curr_sum = 0;
    }
    cout << mx << '\n';
    return 0;
}