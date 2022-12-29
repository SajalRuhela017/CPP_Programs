/**
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
        int n;
        cin >> n;
        string s;
        cin >> s;
        string ans = "";
        int count = s[0] == '1' ? 1 : 0;
        for(int i = 1; i < n; i++)
        {
            ans += (count & 1) ? '-' : '+';
            if(s[i] == '1')
            {
                count++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}