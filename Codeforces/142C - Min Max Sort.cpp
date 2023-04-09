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
        int n;
        cin >> n;
        vector<int> v(n), p(n + 1);
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
            p[v[i]] = i;
        }
        if(is_sorted(v.begin(), v.end()))
        {
            cout << "0\n";
            continue;
        }
        int s = (n + 1) / 2, e = (n + 2) / 2;
        while(s > 0 && (s == e || (p[s] < p[s + 1] && p[e] > p[e - 1])))
            s-- , e++;
        cout << (n - e + s + 1) / 2 << '\n';
    }
    return 0;
}