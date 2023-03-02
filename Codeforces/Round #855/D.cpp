/**             ॐ
 *      author : rhsajal_017
**/

#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t, k = 1;
    cin >> t;
    while(t--)
    {
        long long n, ans = 1;
        cin >> n;
        string s;
        cin >> s;
        unordered_set<string> st;
        int i = 0, j = 2;
        while(j < n)
        {
            if(s[i] != s[j])
                ans++;
            i++ , j++;
        }
        cout << ans << endl;
    }
    return 0;
}