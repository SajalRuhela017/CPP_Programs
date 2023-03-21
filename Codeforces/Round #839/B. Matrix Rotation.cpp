#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int a, b, c, d;
        cin  >> a >> b >> c >> d;
        if(a < b && a < c && b < d && c < d)
        {
            cout << "YES" << endl;
        }
        else if(c < a && c < d && a < b && d < b)
        {
            cout << "YES" << endl;
        }
        else if(d < c && c < a && b < a && d < b)
        {
            cout << "YES" << endl;
        }
        else if(b < d && d < c && a < c && b < a)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}