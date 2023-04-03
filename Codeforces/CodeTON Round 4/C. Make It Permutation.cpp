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
        int n, c, d, ans = 0;
        cin >> n >> c >> d;
        vector<int> v;
        set<int> st;
        for(int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if(st.find(x) == st.end())
            {
                st.insert(x);
                v.push_back(x);
            }            
            else
                ans += c;
        }
        sort(v.begin(), v.end());
        int correct = 0;
        for(int i = 0; i < n; i++)
        {
            if(v[i] == i + 1)
                correct++;
        }
        if(correct == n)
        {
            cout << "0\n";
            continue;
        }
        for(int i = correct - 1; i < n - 1; i++)
        {
            if(v[i] == v[i + 1] + 1)
                continue;
            else
            {
                int insert = (v[i + 1] - v[i] - 1) * d;
                int remove = (n - 1 - i) * c;
                if(insert <= remove)
                {
                    ans += insert;
                }
                else
                {
                    ans += remove;
                    break;
                }
            }
        }
        cout << ans << '\n';
    }
    return 0;
}