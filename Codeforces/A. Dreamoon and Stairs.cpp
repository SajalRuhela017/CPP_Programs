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
    int n, m, x;
    cin >> n >> m;
    x = (n + 1) / 2;
    while(x % m)
        x++;
    cout << (x > n ? -1 : x) << endl;
    return 0;
}