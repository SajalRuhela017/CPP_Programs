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
        int n, ans = 0;
        cin >> n;
        string s;
        cin >> s;
        set<string> st;
        for(int i = 0; i < n - 1; i++)
        {
            string temp = "";
            temp += s[i];
            temp += s[i + 1];
            if(st.find(temp) == st.end())
            {
                ans++;
                st.insert(temp);
            }
            
        }
        cout << ans << '\n';
    }
    return 0;
}