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
        int n, sum = 0, pos = 0, neg = 0;
        cin >> n;
        vector<int> b(n);
        for(int i = 0; i < n; i++)
        {
            cin >> b[i];
            sum += b[i];
            if(b[i] == 1)
                neg += (i + 1);
            else
                pos += (i + 1);
        }
        cout << abs(pos - neg) << '\n';
    }
    return 0;
}