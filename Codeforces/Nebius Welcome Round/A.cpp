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
        long long a, b, moves = 0;
        cin >> a >> b;
        if(abs(a) == abs(b))
            cout << 2 * abs(a) << "\n";
        else
            cout << 2 * max(abs(a) , abs(b)) - 1 << endl;
    }
    return 0;
}