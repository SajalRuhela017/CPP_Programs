/**             🕉
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
        long long n, m, count = 0;
        cin >> n >> m;
        string s, t;
        cin >> s >> t;
        reverse(t.begin() , t.end());
        string temp = s + t;
        for(int i = 1; i < temp.size(); i++)
        {
            if(temp[i] == temp[i - 1])
                count++;
        }      
        cout << (count > 1 ? "NO" : "YES") << endl;
    }
    return 0;
}