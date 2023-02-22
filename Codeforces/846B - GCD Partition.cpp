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
        long long n, sum = 0, curr = 0, ans = 0;
        cin >> n;
        vector<long long> v(n);
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
            sum += v[i];
        }
        for(int i = 0; i < n - 1; i++)
        {
            curr += v[i];
            sum -= v[i];
            ans = max(ans , __gcd(curr , sum));
        }
        cout << ans << endl;
    }
    return 0;
}