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
    int n;
    cin >> n;
    string s;
    map<string, int> mp;
    for(int i = 0; i < n; i++)
    {
        cin >> s;
        if(mp.find(s) == mp.end())
        {
            cout << "OK" << '\n';
            mp[s] = 1;
        }
        else
        {
            string t = to_string(mp[s]);
            cout << s + t << '\n';
            mp[s] = mp[s] + 1;
        }
    }
    return 0;
}