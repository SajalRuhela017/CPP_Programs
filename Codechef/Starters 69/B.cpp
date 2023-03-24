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
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<int> o, z;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == '1')
                o.push_back(i + 1);
            else
                z.push_back(i + 1);
        }
        if(o.empty() || z.empty())
        {
            cout << "-1\n";
            continue;
        }
        if(o.size() >= z.size())
        {
            for(int i = 0; i < n; i++)
                cout << o[i] << " ";
        }
        else
        {
            for(int i = 0; i < n; i++)
                cout << z[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}