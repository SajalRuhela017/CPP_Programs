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
        long long n, count = 0;
        cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
            v[i] %= 2;
        }
        for(int i = 1; i < n; i++)
            if(v[i] == v[i - 1])    
                count++;
        cout << count << endl;
    }
    return 0;
}