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
        long long n;
        cin >> n;
        if(n & 1)
        {
            cout << "Yes" << endl;
            long long x = 2 * n;
            for(int i = 1; i <= n; i += 2)
                cout << i << " " << x-- << endl;
            for(int i = 2; i <= n; i += 2)
                cout << i << " " << x-- << endl;
        }        
        else
            cout << "No" << endl;
    }
    return 0;
}