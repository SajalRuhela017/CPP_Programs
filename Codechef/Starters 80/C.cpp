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
        long long n, curr = 1, ans = 0, temp = 1;
        cin >> n;
        vector<long long> v(n);
        map<long long , long long> mp;
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
        }
        while(mp[curr])
        {
            temp = (temp % mod) * (mp[curr] % mod);
            ans = (ans %  mod) + (temp % mod);
            temp %= mod;
            ans %= mod;
            curr++;
        }
        cout << ans << "\n";
    }
    return 0;
}