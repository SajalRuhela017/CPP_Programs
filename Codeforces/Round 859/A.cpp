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
        long long a, b , c;
        cin >> a >> b >> c;
        if(a + b == c)
            cout << "+\n";
        else if(a - b == c)
            cout << "-\n";
    }
    return 0;
}