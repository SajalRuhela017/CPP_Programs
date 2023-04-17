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
        int ind = -1;
        bool flag = true;
        int n = s.length();
        for(int i = 0; i < n - 1; i++)
        {
            int temp = (s[i] - '0') + (s[i + 1] - '0');
            if(temp >= 10)
                ind = i;
        }
        if(ind == -1)
        {
            cout << (s[0] - '0' + s[1] - '0');
            for(int i = 2; i < n; i++)
                cout << s[i];
        }
        else
        {
            for(int i = 0; i < ind; i++)
                cout << s[i];
            cout << (s[ind] - '0' + s[ind + 1] - '0');
            for(int i = ind + 2; i < n; i++)
                cout << s[i];
        }
        cout << '\n';
    }
    return 0;
}