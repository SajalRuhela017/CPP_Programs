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
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++)
            cin >> v[i];
        if(v[0] != n)
        {
            cout << "NO" << '\n';
            continue;
        }
        vector<int> h;
        for(int i = n - 1; i >= 0; i--)
        {
            while(b.size() < a[i])
                b.push_back(i + 1);
        }
        bool flag = 0;
        for(int i = )
    }
    return 0;
}