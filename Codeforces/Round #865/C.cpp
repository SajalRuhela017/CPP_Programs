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
        for(int i = 0; i < n; i++)
            cin >> v[i];
        if(is_sorted(v.begin(), v.end()) || n & 1)
        {
            cout << "YES\n";
            continue;
        }
        if(n == 2)
        {
            cout << "NO\n";
            continue;
        }
        int deform = 1;
        for(int i = 1; i < n - 1; i++)
        {
            if(v[i] < v[i - 1])
            {
                int temp = v[i - 1] - v[i]; 
                v[i] += temp;
                v[i + 1] += temp;
            }
        }
        for(int i = n - 2; i > 0; i--)
        {
            if(v[i] > v[i + 1])
            {
                int temp = v[i] - v[i + 1];
                v[i] -= temp;
                v[i - 1] -= temp;
            }
        }
        if(v[0] <= v[1])
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}