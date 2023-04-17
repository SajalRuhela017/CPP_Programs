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
        int n;
        cin >> n;
        if(n < 4)
        {
            cout << n << '\n';
            continue;
        }
        vector<int> temp;
        while(n)
        {
            temp.push_back(n % 9);
            n /= 9;
        }
        reverse(temp.begin(), temp.end());
        for(auto &i: temp)
            cout << (i < 4 ? i : i + 1);
        cout << '\n';
    }
    return 0;
}