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
        map<char , vector<int>> m;
        int n = s.length(), q = 0;
        for(int i = 1; i < n - 1; i++)
            m[s[i]].push_back(i + 1);
        if(s[0] < s[n - 1])
        {
            for(char i = s[0]; i <= s[n - 1]; i++)
                q += m[i].size();
            cout << s[n - 1] - s[0] << " " << q + 2 << "\n";
            cout << 1 << " ";
            for(char i = s[0]; i <= s[n - 1]; i++)
            {
                for(int j : m[i])
                    cout << j << " ";
            }
            cout << n << "\n";
        }
        else
        {
            for(char i = s[0]; i >= s[n - 1]; i--)
                q += m[i].size();
            cout << s[0] - s[n - 1] << " " << q + 2 << "\n";
            cout << 1 << " ";
            for(char i = s[0]; i >= s[n - 1]; i--)
            {
                for(int j : m[i])
                    cout << j << " ";
            }
            cout << n << "\n";
        }
    }
    return 0;
}