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
        bool flag = true;
        vector<int> v(n), freq(101);
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
            freq[v[i]]++;
        }
        for(int i = 1; i < 101; i++)
        {
            if(freq[i] > freq[i - 1])
            {
                flag = false;
                break;
            }
        }
        cout << (flag ? "YES" : "NO") << '\n';
    }
    return 0;
}