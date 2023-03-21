/**             ॐ
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
        int a[3];
        for(int i = 0; i < 3; i++)
        {
            cin >> a[i];
        }
        sort(a , a + 3);
        cout << a[1] << endl;
    }
    return 0;
}