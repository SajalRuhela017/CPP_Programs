/**            ॐ
 *      author : rhsajal_017
**/

#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define int long long

void sumEqualToK(int i, vector<int> v, int sum, vector<int> &ds, int k, int &ans)
{
    if(i == v.size())
    {
        if(sum == k)
        {
            ans++;
            for(auto &j: ds)
                cout << j << ' ';
            cout << '\n';
        }
        return;
    }
    sum += v[i];
    ds.push_back(v[i]);
    sumEqualToK(i + 1, v, sum, ds, k, ans);
    sum -= v[i];
    ds.pop_back();
    sumEqualToK(i + 1, v, sum, ds, k, ans);
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, k, ans = 0;
    cin >> n >> k;
    vector<int> v(n), ds;
    for(int i = 0; i < n; i++)
        cin >> v[i];
    sumEqualToK(0, v, 0, ds, k, ans);
    cout << "Total subsequences with sum " << k << " are: " << ans << '\n';
    return 0;
}