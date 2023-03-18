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
        long long a, b, c, d;
        cin >> a >> b >> c >> d;
        if(d < b)
            cout << "-1\n";
        else if(a + d - b < c)
            cout << "-1\n";
        else    
            cout << 2 * d + a - 2 * b - c << "\n";
    }
    return 0;
}