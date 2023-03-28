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
        string s;
        cin >> s;
        map<char , vector<int>> mp;
        int n = s.size();
        for(int i = 0; i < s.size(); i++)
            mp[s[i]].push_back(i + 1);
        if(s[0] < s[n - 1])
        {
            int visited = 0;
            for(char i = s[0]; i <= s[n - 1]; i++)
                visited += mp[i].size();
            cout << s[n  - 1] - s[0] << " " << visited << "\n";
            for(char i = s[0]; i <= s[n - 1]; i++)
            {
                for(auto &j: mp[i])
                    cout << j << " ";
            }
        }
        else
        {
            int visited = 0;
            for(char i= s[0]; i >= s[n - 1]; i--)
                visited += mp[i].size();
            cout << s[0] - s[n - 1] << " " << visited << "\n";
            for(char i= s[0]; i >= s[n - 1]; i--)
            {
                for(auto &j: mp[i])
                    cout << j << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}