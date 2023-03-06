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
        long long size = 2 * n - 2;
        vector<string> v(size);
        for(int i = 0; i < size; i++)
            cin >> v[i];
        sort(v.begin() , v.end());
        for(int i = size - 1; i >= 0; i--)
        {
            
        }
    }
    return 0;
}