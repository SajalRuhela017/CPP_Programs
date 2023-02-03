/**
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
        char c;
        cin >> c;
        if(c == 'c' ||c == 'o' ||c == 'd' ||c == 'e' ||c == 'f' ||c == 'r' ||c == 's')
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}