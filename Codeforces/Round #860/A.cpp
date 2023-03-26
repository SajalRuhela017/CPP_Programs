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
        int n, mx_a = 0, mx_b = 0;
        cin >> n;
        vector<int> a(n), b(n);
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            mx_a = max(mx_a , a[i]);
        }
        for(int i = 0; i < n; i++)
        {
            cin >> b[i];
            mx_b = max(mx_b , b[i]);
        }
        for(int i = 0; i < n; i++)
        {
            if(a[i] > b[i])
                continue;
            else
                swap(a[i] , b[i]);
        }
        mx_a = a[n - 1], mx_b = b[n - 1];
        sort(a.begin() , a.end());
        sort(b.begin() , b.end());
        if(a[n - 1] == mx_a && b[n - 1] == mx_b)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}