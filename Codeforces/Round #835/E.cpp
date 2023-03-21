/**            ॐ
 *      author : rhsajal_017
**/

#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007

long long calculate(vector<long long>& v)
{
    long long n = v.size(), ans = 0, zero = 0;
    for(int i = n - 1; i >= 0; i--)
    {
        if(!v[i])
            zero++;
        else
            ans += zero;
    }
    return ans;
} 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t, k = 1;
    cin >> t;
    while(t--)
    {
        long long n, ans = 0, zero = 0;
        cin >> n;
        vector<long long> v(n);
        for(int i = 0; i < n; i++)
            cin >> v[i];
        ans = calculate(v);
        for(int i = 0; i < n; i++)
        {
            if(!v[i])
            {
                v[i] = 1;
                ans = max(ans , calculate(v));
                v[i] = 0;
                break;
            }
        }
        for(int i = n - 1; i >= 0; i--)
        {
            if(v[i])
            {
                v[i] = 0;
                ans = max(ans, calculate(v));
                v[i] = 1;
                break;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}