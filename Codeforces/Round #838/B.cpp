/**             ॐ
 *      author : rhsajal_017
**/

#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007

int num(long long x)
{
    long long curr = 1;
    while(curr <= x)
        curr *= 2;
    return curr;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t, k = 1;
    cin >> t;
    while(t--)
    {
        long long n, x = 0;
        cin >> n;
        cout << n << "\n";
        for(int i = 1; i <= n; i++)
        {
            cin >> x;
            cout << i << " " << num(x) - x << "\n";
        }
    }
    return 0;
}