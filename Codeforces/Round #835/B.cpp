/**             ॐ
 *      author : rhsajal_017
**/

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t, k = 1;
    cin >> t;
    while(t--)
    {
        int n, ans = 1;
        cin >> n;
        string s;
        cin >> s;
        for(int i = 0; i < n; i++)
            ans = max(ans , s[i] - 'a' + 1);
        cout << ans << endl;
    }
    return 0;
}