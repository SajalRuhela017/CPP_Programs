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
        for(int i = 0; i < n; i++)
            cin >> v[i];
        bool flag = false;
        if(n == 1)
            flag = (v[0] == k);
        else
        {
            sort(v.begin(), v.end());
            int i = 0, j = 1;
            while(i < n && j < n)
            {
                if(abs(k) + v[i] == v[j])
                {
                    flag = true;
                    break;
                }
                else if(v[i] + abs(k) < v[j])
                    i++;
                else
                    j++;
            }
        }
        cout << (flag ? "Yes" : "No") << '\n';
    }
    return 0;
}