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
        long long n, likes = 0, dislikes = 0;
        cin >> n;
        for(int i = 0; i < n; i++)
        {
            long long x;
            cin >> x;
            if(x > 0)
                likes++;
            else
                dislikes++;
        }
        for(int i = 1; i <= n; i++)
        {
            if(likes >= i)
                cout << i << " ";
            else
                cout << 2 * likes - i << " ";
        }
        cout << "\n";
        for(int i = 1; i <= n; i++)
        {
            if(2 * dislikes >= i)
                cout << i % 2 << " ";
            else
                cout << i - 2 * dislikes << " ";
        }
        cout << "\n";
    }
    return 0;
}