/**            ॐ
 *      author : rhsajal_017
**/

#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define int long long

int dir[4][2] = {{1,0}, {0,1}, {-1, 0}, {0,-1}};

int dfs(int i, int j, vector<vector<int>>& v, int n, int m)
{
    int f = v[i][j];
    v[i][j] = 0;
    int dr[] = {0, 1, 0, -1, 0};
    for(int k = 0; k < 4; k++) 
    {
        int nr = i + dr[k];
        int nc = j + dr[k + 1];
        if(nr >= 0 && nr < n && nc >= 0 && nc < m && v[nr][nc] > 0)
            f += dfs(nr, nc, v, n, m);
    }
    return f;
}

int findVolume(vector<vector<int>>& v) 
{
    int n = v.size();
    int m = v[0].size();
    int ans = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++) 
        {
            if(v[i][j] > 0)
                ans = max(ans, dfs(i, j, v, n, m));
        }
    }
    return ans;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tt, k = 1;
    cin >> tt;
    while(tt--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> v(n, vector<int>(m));
        map<int, int> mp;
        set<int> s;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                cin >> v[i][j];
                mp[i] = j;
            }
        }
        mp.clear();
        int ans = findVolume(v);
        cout << ans << '\n';
    }
    return 0;
}