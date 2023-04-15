/**            ॐ
 *      author : rhsajal_017
**/

#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define int long long

int findMEX(vector<int> v)
{
    int mex = 0, n = v.size(), check = 0;
    sort(v.begin(), v.end());
    for(int i = 0; i < n; i++)
    {
        if(v[i] == check)
            mex++ , check++;
    }
    return mex;
}

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
        vector<int> v(n);
        map<int, vector<int>> mp;
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]].push_back(i);
        }
        vector<int> temp = v;
        int mex = findMEX(v);
        if(mex == n)
        {
            cout << "No" << '\n';
            continue;
        }
        if(mex == 0)
        {
            cout << "Yes" << '\n';
            continue;
        }
        int f = INT_MAX, s = -1, target = 0;
        for(int i = 0; i < n; i++)
        {
            if(v[i] == mex + 1)
            {
                f = min(f, i);
                s = max(s, i);
            }
        }
        if(f < INT_MAX)
        {
            for(int i = f; i <= s; i++)
                v[i] = mex;
            int newmex = findMEX(v);
            cout << (newmex == mex + 1 ? "Yes" : "No") << '\n';
        }
        else
            cout << "Yes" << '\n';
    }
    return 0;
}