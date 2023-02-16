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
        cout << a + 2 * min(b , c) + min(a + 1 , abs(c - b) + d) << endl;
    }
    return 0;
}