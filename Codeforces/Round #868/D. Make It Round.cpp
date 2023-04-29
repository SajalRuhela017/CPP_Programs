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
    int tt, k = 1;
    cin >> tt;
    while(tt--)
    {
        int n, m, k = 1;
        cin >> n >> m;
        int num = n, two = 0, five = 0;
        while(num > 0 && num % 2 == 0)
        {
            num /= 2;
            two++;
        }
        while(num > 0 && num % 5 == 0)
        {
            num /= 5;
            five++;
        }
        while(two < five && k * 2 <= m)
        {
            k *= 2;
            two++;
        }
        while(five < two && k * 5 <= m)
        {
            k *= 5;
            five++;
        }
        while(k * 10 <= m)
        {
            k *= 10;
        }
        if(k == 1)
        {
            cout << m * n << '\n';
        }
        else
        {
            k *= (m / k);
            cout << n * k << '\n';
        }
    }
    return 0;
}