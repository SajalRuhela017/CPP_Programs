/**             ॐ
 *      author : rhsajal_017
**/

#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
 
long long fact(long long n)
{
    long long res = 1;
    for(int i = 2; i <= n; i++)
        res = ((res % mod) * (i % mod)) % mod;
    return res;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t, k = 1;
    cin >> t;
    while(t--)
    {
        long long n;
        cin >> n;
        long long ans = (n % mod) * ((n - 1) % mod) % mod;
        ans = (ans % mod) * (fact(n) % mod) % mod;
        cout << ans % mod << endl;
    }
    return 0;
}