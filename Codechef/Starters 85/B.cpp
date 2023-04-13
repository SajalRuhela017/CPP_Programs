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
        string s, temp = "";
        cin >> s;
        int n = s.size();
        temp += s[n - 1];
        if(n > 1)
            temp += s[n - 2];
        reverse(temp.begin(), temp.end());
        int x = stoi(temp);
        cout << x % 20 << '\n';
    }
    return 0;
}