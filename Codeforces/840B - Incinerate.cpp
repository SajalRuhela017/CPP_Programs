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
        int n, k;
        cin >> n >> k;
        vector<pair<int , int>> v(n);
        for(int i = 0; i < n; i++)
            cin >> v[i].first;
        for(int i = 0; i < n; i++)
            cin >> v[i].second;
        sort(v.begin() , v.end());
        vector<int> suf(n);
        suf[n - 1] = v[n - 1].second;
        for(int i = n - 2; i >= 0; i--)
            suf[i] = min(suf[i + 1] , v[i].second);
        int dealt = 0, ptr = 0;
        while(k > 0 && ptr < n)
        {
            dealt += k;
            while(ptr < n && v[ptr].first <= dealt)
                ptr++;
            if(ptr < n)
                k -= suf[ptr];
        }
        cout << (ptr == n ? "YES" : "NO") << "\n";
    }
    return 0;
}