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
        int n, ans = 0;
        cin >> n;
        string s;
        cin >> s;
        for(int i = 0; i < s.size(); i++)
        {
            vector<int> freq(10, 0);
            int mx = 0, distinct = 0;
            for(int j = i; j < s.size(); j++)
            {
                freq[s[j] - '0']++;
                if(freq[s[j] - '0'] <= 10)
                {
                    if(freq[s[j] - '0'] == 1)
                        distinct++;
                    mx = max(mx, freq[s[j] - '0']);
                    if(mx <= distinct)
                        ans++;
                }
                else
                    break;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}