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
    long long n, one = 0, zero = 0;
    cin >> n;
    string s;
    cin >> s;
    for(int i = 0; i < n; i++)
    {
        if(s[i] == 'z')
            zero++;
        if(s[i] == 'n')
            one++;
    }
    string ans = "";
    for(int i = 0; i < one; i++)
        ans += "1 ";
    for(int i = 0; i < zero; i++)
        ans += "0 ";
    cout << ans << "\n";
    return 0;
}