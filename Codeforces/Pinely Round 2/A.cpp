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
    int tt, k = 1;
    cin >> tt;
    while(tt--)
    {
        int n, a, q;
        cin >> n >> a >> q;
        string s;
        cin >> s;
        int on = 0, curr = a;
        bool flag = false;
        for(int i = 0; i < q; i++)
        {
            if(curr >= n)
                break;
            if(s[i] == '+')
                curr++ , on++;
            else
                curr--;
        }
        if(curr >= n)
            cout << "YES" << '\n';
        else if(a + on < n)
            cout << "NO" << '\n';
        else
            cout << "MAYBE" << '\n';
    }
    return 0;
}