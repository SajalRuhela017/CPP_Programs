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
        int n, one_ind = -1, two_ind = -1, n_ind = -1;
        cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
            if(v[i] == 1)
                one_ind = i;
            if(v[i] == 2)
                two_ind = i;
            if(v[i] == n)
                n_ind = i;
        }
        if((n_ind > one_ind && n_ind < two_ind) || (n_ind < one_ind && n_ind > two_ind))
        {
            cout << one_ind + 1 << ' ' << two_ind + 1 << '\n';
        }
        else if(n_ind < one_ind && n_ind < two_ind)
        {
            cout << min(one_ind, two_ind) + 1 << ' ' << n_ind + 1 << '\n';
        }
        else
        {
            cout << max(one_ind, two_ind) + 1 << ' ' << n_ind + 1 << '\n';
        }
    }
    return 0;
}