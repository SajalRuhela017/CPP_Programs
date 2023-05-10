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
    string s, ans;
    cin >> s;
    bool a = 0, b = 0, c = 0, d = 0;
    int n = s.size(), l = 0, r = 0;
    while(l < n)
    {
        a = 0, b = 0, c = 0, d = 0;
        a += (s[l] == 'A');
        b += (s[l] == 'C');
        c += (s[l] == 'G');
        d += (s[l] == 'T');
        r = l + 1;
        while(r < n && a + b + c + d != 4)
        {
            a += (s[r] == 'A');
            b += (s[r] == 'C');
            c += (s[r] == 'G');
            d += (s[r] == 'T');
            r++;
        }
        if (a + b + c + d == 4)
            ans += s[r - 1];
        l = r;
    }
    if(a + b + c + d == 4)
        ans += 'A';
    else if(!a)
        ans += 'A';
    else if(!b)
        ans += 'C';
    else if(!c)
        ans += 'G';
    else if(!d)
        ans += 'T';
    cout << ans << '\n';
    return 0;
}