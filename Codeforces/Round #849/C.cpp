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
        int count = 0;
        for(int i = 0; i < n / 2; i++)
        {
            if(s[i] != s[n - i - 1])
                count++;
            else    
                break;
        }
        cout << n - (2 * count) << endl;
    }
    return 0;
}