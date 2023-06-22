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
        int n, a = 0, b = 0, ab = 0, o = 0;
        cin >> n;
        vector<string> v(n);
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
            if(v[i] == "A")
                a++;
            else if(v[i] == "B")
                b++;
            else if(v[i] == "O")
                o++;
            else
                ab++;
        }
        o = max(o + a + ab, o + b + ab);
        a += ab;
        b += ab;
        cout << max(a, max(o, b)) << '\n';
    }
    return 0;
}