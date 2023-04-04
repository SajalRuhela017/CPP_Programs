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
        int n, x1, y1, x2, y2;
        vector<int> v(4);
        cin >> n >> x1 >> y1 >> x2 >> y2;
        v[0] = x1, v[1] = y1, v[2] = x2, v[3] = y2;
        sort(v.begin(), v.end());
        x1-- , y1-- , x2-- , y2--;
        x1 = min(x1, n - 1 - x1);
        x2 = min(x2, n - 1 - x2);
        y1 = min(y1, n - 1 - y1);
        y2 = min(y2, n - 1 - y2);
        int temp1 = min(x1, y1), temp2 = min(x2, y2);        
        if(temp1 == temp2)
        {
            cout << "0\n";
            continue;
        }
        if(temp1 > temp2)
            cout << temp1 - temp2 << "\n";
        else
            cout << temp2 - temp1 << "\n";
    }
    return 0;
}