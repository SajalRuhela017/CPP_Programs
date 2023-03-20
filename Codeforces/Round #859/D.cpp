/**             ॐ
 *      author : rhsajal_017
**/

#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t, k = 1;
    cin >> t;
    while(t--)
    {
        long long n, q, sum = 0;
        cin >> n >> q;
        vector<long long> v(n), pref(n), suff(n);
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
            sum += v[i];
        }
        pref[0] = v[0];
        for(int i = 1; i < n; i++)
            pref[i] = pref[i - 1] + v[i];

        vector<vector<long long>> queries(q);
        for(int i = 0; i < q; i++)
        {
            long long l, r, k, temp = 0;
            cin >> l >> r >> k;
            if(l > 1)
                temp = sum - (pref[r - 1] - pref[l - 2]) + (k * (r - l + 1));
            else
                temp  = sum - pref[r - 1] + (k * (r - l + 1));
            cout << (temp & 1 ? "YES" : "NO") << endl;
        }
    }
    return 0;
}