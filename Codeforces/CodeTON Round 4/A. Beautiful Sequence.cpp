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
        vector<int> v(n);
        bool flag = false;
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
            if(v[i] <= i + 1)
                flag = true;
        }
        cout << (flag ? "Yes\n" : "No\n");
    }
    return 0;
}