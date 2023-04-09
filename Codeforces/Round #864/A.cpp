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
    int t, k = 1;
    cin >> t;
    while(t--)
    {
        int n, m, x1, x2, y1, y2;
        cin >> n >> m >> x1 >> y1 >> x2 >> y2;
        if((x1 == 1 && y1 == 1) || (x2 == 1 && y2 == 1))
        {
            cout << "2\n";
        }
        else if((x1 == n && y1 == 1) || (x2 == n && y2 == 1))
        {
            cout << "2\n";
        }
        else if((x1 == n && y1 == m) || (x2 == n && y2 == m))
        {
            cout << "2\n";
        }
        else if((x1 == 1 && y1 == m) || (x2 == 1 && y2 == m))
        {
            cout << "2\n";
        }
        else if(x1 == 1 || x2 == 1 || x1 == n || x2 == n || y1 == m || y2 == m || y1 == 1 || y2 == 1)
        {
            cout << "3\n";
        }
        else
        {
            cout << "4\n";
        }
    }
    return 0;
}