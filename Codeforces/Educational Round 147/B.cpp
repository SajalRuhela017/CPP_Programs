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
        vector<int> a(n), b(n), pref_a(n), pref_b(n);
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            pref_a[0] = a[0];
            if(i)
                pref_a[i] = pref_a[i - 1] + a[i];
        }
        for(int i = 0; i < n; i++)
        {
            cin >> b[i];
            pref_b[0] = b[0];
            if(i)
                pref_b[i] = pref_b[i - 1] + b[i];
        }
        int ind1 = 0;
        for(int i = 0; i < n; i++)
        {
            if(a[i] != b[i])
            {
                ind1 = i;
                break;
            }
        }
        int ind2 = ind1;
        for(int i = ind1 + 1; i < n; i++)
        {
            if(a[i] != b[i])
            {
                ind2 = i;
                break;
            }
        }
        for(int i = ind1 - 1; i >= 0; i--)
        {
            if(b[i] <= b[ind1])
                ind1 = i;
            else
                break;
        }
        for(int i = ind2 + 1; i < n; i++)
        {
            if(b[i] >= b[ind2])
                ind2 = i;
            else
                break;
        }
        cout << ind1 + 1 << ' ' << ind2 + 1 << '\n';
    }
    return 0;
}