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
        int n, one = 0;
        cin >> n;
        vector<int> v(n);
        set<int> st;
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
            if(v[i] == 1)
                one++;
            st.insert(v[i]);
        }
        if(st.size() == 1)
        {
            cout << "0\n";
            continue;
        }
        if(one)
        {
            cout << "-1\n";
            continue;
        }
        vector<pair<int , int>> ans;
        int count = 1;
        while(count < n)
        {
            count = 1;
            for(int i = 0; i < n - 1; i++)
            {
                if(v[i] > v[i + 1])
                {
                    ans.push_back({i , i + 1});
                    v[i] = (v[i] + v[i + 1] - 1) / v[i + 1];
                    break;
                }
                if(v[i] < v[i + 1])
                {
                    ans.push_back({i + 1 , i});
                    v[i + 1] = (v[i] + v[i + 1] - 1) / v[i];
                    break;
                }
            }
            for(int i = 0; i < n - 1; i++)
            {
                if(v[i] == v[i + 1])
                    count++;
                else
                    count = 1;
            }
        }
        cout << ans.size() << "\n";
        for(auto &it: ans)
            cout << it.first + 1 << " " << it.second + 1 << "\n";
    }
    return 0;
}