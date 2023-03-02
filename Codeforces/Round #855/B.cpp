/**             ॐ
 *      author : rhsajal_017
**/

#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t, k = 1;
    cin >> t;
    while(t--)
    {
        int n, k, ans = 0;
        cin >> n >> k;
        string s;
        cin >> s;
        sort(s.begin() , s.end());
        // cout << s << endl;
        vector<int> v(52 , 0);
        for(int i = 0; i < n; i++)
        {
            if(s[i] <= 'Z')
                v[s[i] - 'A']++;
            else
                v[s[i] - 'a' + 26]++;
        }
        for(int i = 0; i < 26; i++)
        {
            ans += min(v[i] , v[i + 26]);
            if(k > 0)
            {
                if(v[i] > 1 || v[i + 26] > 1)
                {
                    ans += min(k , abs(v[i] - v[i + 26]) / 2);
                    k -= min(k , abs(v[i] - v[i + 26]) / 2);
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}