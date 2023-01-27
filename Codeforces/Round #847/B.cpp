/**
 *      author : rhsajal_017
**/

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t, k = 1;
    cin >> t;
    while(t--)
    {
        long long n, s, r;
        cin >> n >> s >> r;
        cout << s - r << " ";
        int x = r % (n - 1);
        int y = r / (n - 1);
        for(int i = 1; i < n; i++)
        {
            if(x)
            {
                cout << y + 1 << " ";
                x--;
            }
            else
            {
                cout << y << " ";            
            }
        }
        cout << endl;
    }
    return 0;
}