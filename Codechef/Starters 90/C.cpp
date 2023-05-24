/**            ॐ
 *      author : rhsajal_017
**/

#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define int long long

int setBits(int n)
{
    int count = 0;
    while(n)
    {
        count += (n & 1);
        n >>= 1;
    }
    return count;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tt, k = 1;
    cin >> tt;
    while(tt--)
    {
        int n, m;
        cin >> m >> n;
        if(n == m)
        {
            cout << "YES" << '\n';
            continue;
        }
        if(n > m)
        {
            cout << "NO" << '\n';
            continue;
        }
        double M = m, N = n;
        bool flag = false;
        while(m % 2 == 0)
        {
            m /= 2;
        }
        if(n % m == 0)
        {
            cout << "YES" << '\n';
        }
        else
        {
            cout << "NO" << '\n';
        }
        // cout << (flag ? "YES" : "NO") << '\n';
        // if(n == m)
        // {
        //     cout << "YES" << '\n';
        // }
        // else if(n > m)
        // {
        //     cout << "NO" << '\n';
        // }
        // else if(n == 1)
        // {
        //     if(setBits(m) == 1)
        //         cout << "YES" << '\n';
        //     else
        //         cout << "NO" << '\n';
        // }
        // else if(m % n == 0)
        // {
        //     cout << "YES" << '\n';
        // }
        // else if(setBits(m) == 1)
        // {
        //     cout << "YES" << '\n';
        // }
        // else
        // {
        //     cout << "NO" << '\n';
        // }
    }
    return 0;
}