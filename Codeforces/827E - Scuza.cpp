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
        int n, q;
        cin >> n >> q;
        vector<int> pref, mx;
        pref.push_back(0);
        for(int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            pref.push_back(pref.back() + x);
            if(!i)
                mx.push_back(x);
            else
                mx.push_back(max(mx.back() , x));
        }
        while (q--)
        {
            int x;
            cin >> x;
            int ans = upper_bound(mx.begin() , mx.end() , x) - mx.begin();
            cout << pref[ans] << " ";
        }
        cout << "\n";
    }
    return 0;
}