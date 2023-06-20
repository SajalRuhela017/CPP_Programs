/**            ॐ
 *      author : rhsajal_017
**/

#include <bits/stdc++.h>
using namespace std;
 
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tt;
    cin >> tt;
    while(tt--)
    {
        int n, x;
        cin >> n;
        string ans = "";
        int v[n];
        for(int i = 0; i < n; i++)
            cin >> v[i];
        if(n == 1)
        {
            cout << "1\n";
            continue;
        }
        ans += '1';
        int j = 1;
        while(j < n && v[j - 1] <= v[j])
        {
            ans += '1';
            j++;
        }
        x = v[j - 1];

        while(j < n)
        {
            if(v[j] <= v[0])
            {
                ans += '1';
                x = v[j];
                j++;
                break;
            }
            else if(v[j] >= x)
            {
                ans += '1';
                x = v[j++];
            }
            else
            {
                ans += '0';
                j++;
            }
        }
        while(j < n)
        {
            if(v[j] <= v[0] and v[j] >= x)
            {
                x = v[j++];
                ans += '1';
            }
            else
            {
                ans += '0';
                j++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}