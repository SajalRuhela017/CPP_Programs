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
        for(int i = 0; i < n; i++)
            cin >> v[i];
        int start = 0;
        if(v[0] == n)
            start = max_element(v.begin() + 1, v.end()) - v.begin();
        else
            start = max_element(v.begin(), v.end()) - v.begin();
        
        vector<int> ans = v;
        sort(ans.begin(), ans.end());
        if(start == n - 1)
        {
            int idx = 0;
            vector<int> temp(n);
            temp[idx++] = v[start--];
            while(v[start] > v[0])
                temp[idx++] = v[start--];
            for(int i = 0; i < start + 1; i++)
                temp[idx++] = v[i];
            ans = max(ans, temp);
        }
        int j = start - 1;
        while(j >= 0)
        {
            vector<int> temp(n);
            int idx = 0;
            for(int i = start; i < n; i++)
                temp[idx++] = v[i];
            for(int i = start - 1; i > j - 1; i--)
                temp[idx++] = v[i];
            for(int i = 0; i < j; i++)
                temp[idx++] = v[i];
            ans = max(ans, temp);
            j--;
        }
        for(int i = 0; i < n; i++)
            cout << ans[i] << ' ';
        cout << '\n';
    }
    return 0;
}