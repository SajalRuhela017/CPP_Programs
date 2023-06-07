/**            ॐ
 *      author : rhsajal_017
**/

#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define int long long

bool isPalin(string s)
{
    for(int i = 0; i < s.size() / 2; i++)
    {
        if(s[i] != s[s.size() - i - 1])
            return false;
    }
    return true;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tt, k = 1;
    cin >> tt;
    vector<int> palin;
    for(int i = 0; i <= 32767; i++)
    {
        string temp = to_string(i);
        if(isPalin(temp))
            palin.push_back(stoi(temp));
    }
    while(tt--)
    {
        int n;
        cin >> n;
        unordered_map<int, int> mp;
        vector<int> v(n);
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
        }
        int ans = 0;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < palin.size(); j++)
            {
                int x = v[i] ^ palin[j];
                ans = ans + mp[x];
            }
            mp[v[i]]--;
        }
        cout << ans << '\n';
    }
    return 0;
}