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
    long long n, m;
    cin >> n >> m;
    vector<long long> v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i];
    vector<long long> distinct(n , 0);
    set<long long> s;
    for(int i = n - 1; i >= 0; i--)
    {
        s.insert(v[i]);
        distinct[i] = s.size();
    }
    while(m--)
    {
        long long x;
        cin >> x;
        cout << distinct[x - 1] << endl;
    }
    return 0;
}