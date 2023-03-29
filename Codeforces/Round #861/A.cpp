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
        int l, r, ans = 0, luck = 0, mx = 0;
        cin >> l >> r;
        string s = to_string(l);
        if(r < 10 || l == r)
        {
            cout << r << "\n";
            continue;
        }
        while(l <= r)
        {
            string temp = s;
            sort(temp.begin() , temp.end());
            luck = temp[temp.size() - 1] - temp[0];
            if(luck > mx)
            {
                mx = luck;
                ans = stoi(s);
            }
            if(mx == 9)
                break;
            s = to_string(++l);
        }
        cout << ans << endl;
    }
    return 0;
}