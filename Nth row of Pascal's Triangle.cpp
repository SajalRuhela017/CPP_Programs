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
    int n;
    cin >> n;
    cout << "1 ";
    int num = 1;
    for(int i = 1; i < n; i++)
    {
        num = num * (n - i);
        num /= i;
        cout << num << " ";
    }
    cout << "\n";
    return 0;
}