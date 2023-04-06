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
        vector<int> v(n);
        for(int i = 0; i < k; i++)
            cin >> v[i];
        int diff = abs(v[0]);
        bool flag = true;
        for(int i = 0; i < k - 1; i++)
        {
            if(abs(v[i + 1] - v[i]) < diff)
            {
                flag = false;
                break;
            }
            else
                diff = abs(v[i + 1] - v[i]);
        }
        cout << (flag ? "Yes\n" : "No\n");
    }
    return 0;
}