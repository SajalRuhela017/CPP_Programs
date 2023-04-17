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
        int n, x, p;
        cin >> n >> x >> p;
        x = (n - x) % n;
        bool flag = false;
        int swing = 0;
        for(int i = 1; i <= p && i <= 2 * n; i++)
        {
            swing += i;
            swing %= n;
            if(x == swing)
            {
                flag = true;
                break;
            }
        }
        cout << (flag ? "Yes" : "No") << '\n';
    }
    return 0;
}