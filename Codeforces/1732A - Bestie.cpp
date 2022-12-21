/**
 *      author : rhsajal_017 
**/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        cin >> v[0];
        int gcd = v[0];
        for(int i = 1; i < n; i++)
        {
            cin >> v[i];
            gcd = __gcd(gcd , v[i]);
        }
        if(gcd == 1)
        {
            cout << 0 << endl;
        }
        else
        {
            if(__gcd(gcd , n) == 1)
            {
                cout << 1 << endl;
            }
            else if(__gcd(gcd , n - 1) == 1)
            {
                cout << 2 << endl;
            }
            else
            {
                cout << 3 << endl;
            }
        }
    }
    return 0;
}