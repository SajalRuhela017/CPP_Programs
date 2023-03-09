/**             ॐ
 *      author : rhsajal_017
**/

#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007

void reverseArray(vector<long long>& v , long long  r, long long l)
{
    if(l >= r)
        return;
    swap(v[l] , v[r - 1]);
    reverseArray(v , r - 1, l + 1);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long n;
    cin >> n;
    vector<long long> v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i];
    reverseArray(v , n , 0);
    for(auto &i : v)
        cout << i << " ";
    cout << "\n";
    return 0;
}