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
        bool flag = false;
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
            if(v[i] % 5 == 0)
            {
                flag = true;
                v[i] += (v[i] % 10);
            }
        }
        if(flag)
        {
            sort(v.begin(), v.end());
            cout << (v[0] == v[n - 1] ? "Yes" : "No") << '\n';
        }        
        else
        {
            bool flag1 = false, flag2 = false;
            for(int i = 0; i < n; i++)
            {
                while(v[i] % 10 != 2)
                    v[i] += (v[i] % 10);
                if(v[i] % 20 == 2)
                    flag1 = true;
                else
                    flag2 = true;
            }
            cout << (flag1 && flag2 ? "No" : "Yes") << '\n';
        }
    }
    return 0;
}