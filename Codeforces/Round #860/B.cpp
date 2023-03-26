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
        int m, day = 0;
        cin >> m;
        vector<vector<int>> mp(m);
        vector<int> ans;
        while(day < m)
        {
            int n;
            cin >> n;
            for(int i = 0; i < n; i++)
            {
                int x;
                cin >> x;
                mp[day].push_back(x);
            }
            day++;
        }
        set<int> s;
        bool flag = true;
        for(int i = m - 1; i >= 0; i--)
        {
            int winner = 0;
            for(int j = 0; j < mp[i].size(); j++)
            {
                if(s.find(mp[i][j]) == s.end() && !winner)
                    winner = mp[i][j];
                s.insert(mp[i][j]);
            }
            if(!winner)
            {
                flag = false;
                break;
            }
            ans.push_back(winner);
        }
        if(!flag)
            cout << -1;
        else
        {
            reverse(ans.begin() , ans.end());
            for(auto &i: ans)
                cout << i << " ";
        }
        cout << "\n";
    }
    return 0;
}