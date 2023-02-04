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
        long long n;
        cin >> n;
        string s;
        cin >> s;
        int face = 0, ans = 0;
        for(int i = 0; i < n; i++)
        {
            s[i] == ')' ? face-- : face++;
            if(face < 0)    ans++ , face = 0;
        }
        cout << ans << endl;
    }
    return 0;
}