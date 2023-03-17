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
        long long n, k;
        cin >> n >> k;
        if(n == 1)
        {
            cout << "1\n";
            continue;
        }
        long long r = n, l = 1, ans = 0;
        while(l <= r)
        {
            long long m = (r + l) / 2;
            calculate(n , m , k);
            if(val > n)
                r = m - 1;
            else if(val < n)
                l = m + 1;
            else
            {
                ans = m;
                break;
            }
        }
        cout << ans << "\n";        
    }
    return 0;
}