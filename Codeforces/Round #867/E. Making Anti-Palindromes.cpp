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
        string s;
        cin >> s;
        if(n & 1)
        {
            cout << -1 << '\n';
            continue;
        }
        bool flag = true;
        for(int i = 0; i < 26; i++)
        {
            char c = 'a' + i;
            int freq = 0;
            for(int j = 0; j < n; j++)
                freq += (c == s[j]);
            if(freq > n / 2)
            {
                flag = false;
                break;
            }
        }
        if(!flag)
        {
            cout << -1 << '\n';
            continue;
        }
        int mismatch = 0;
        vector<int> count(26);
        for(int i = 0; i < n / 2; i++)
        {
            if(s[i] == s[n - i - 1])
            {
                mismatch++;
                count[s[i] - 'a']++;
            }
        }
        int ans = (mismatch + 1) / 2;
        for(int i = 0; i < 26; i++)
        {
            if(count[i] > mismatch / 2)
            {
                ans = count[i];
                break;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}