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
        string s;
        cin >> s;
        if(s.size() < 3)
        {
            cout << s << "\n";
            continue;
        }
        string ans = "";
        for(int i = 0; i < s.size(); i++)
        {
            if(i < s.size() - 2 && s[i] == s[i + 1] && s[i + 1] == s[i + 2])
            {
                ans += s[i];
                i += 2;
                while(s[i + 1] == s[i] && s[i + 2] == s[i])
                    i += 2;
            }
            else
            {
                ans += s[i];
            }
        }
        cout << ans << "\n";
    }
    return 0;
}