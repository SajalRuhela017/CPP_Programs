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
        long long n, count = 1, mx = 0;
        cin >> n;
        if(n & 1)
        {
            cout << -1 << "\n";
            continue;
        }
        vector<long long> v(n);
        int x = n, y = n - 1;
        for(int i = 0; i < n; i++)
        {
            if(i & 1)
            {
                v[i] = x;
                x -= 2;
            }
            else
            {
                v[i] = y;
                y -= 2;
            }
            cout << v[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}