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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        if(k % 2 == 0)
        {
            sort(s.begin(), s.end());
            cout << s << '\n';
            continue;
        }
        vector<char> odd, even;
        for(int i = 0; i < n; i++)
        {
            if(i & 1)
                odd.push_back(s[i]);
            else
                even.push_back(s[i]);
        }
        sort(odd.begin(), odd.end());
        sort(even.begin(), even.end());
        string ans = "";
        for(int i = 0, j = 0; i < even.size() || j < odd.size(); i++ , j++)
        {
            if(i < even.size())
                ans += even[i];
            if(j < odd.size())
                ans += odd[i];
        }
        cout << ans << '\n';
    }
    return 0;
}