#include<bits/stdc++.h>
using namespace std;
#define int long long int

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int y, x;
        cin >> y >> x;
        if(x > y)
        {
            if(x & 1)
            {
                cout << x * x - y + 1 << '\n';
            }
            else
            {
                x--;
                cout << x * x + y << '\n';
            }
        }
        else
        {
            if(y & 1)
            {
                y--;
                cout << y * y + x << '\n';
            }
            else
            {
                cout << y * y + 1 - x << '\n';                
            }
        }
    }
    
}
