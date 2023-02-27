/**             ॐ
 *      author : rhsajal_017
**/

#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
 
bool calculate(vector<long long>& v , long long n) 
{
    long long gcd = 0;
    bool f = false;
    for(int i = 0; i < n; ++i) 
    {
        gcd = __gcd(gcd, v[i]);
        if(i > 0 && gcd <= 2) {
            for(int j = 0; j < i; ++j) 
            {
                if(__gcd(v[i], v[j]) <= 2) 
                    return true;             
            }
        }
    }
    return false;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t, k = 1;
    cin >> t;
    while(t--)
    {
        long long n, gcd;
        cin >> n;
        vector<long long> v(n);
        for(int i = 0; i < n; i++)
            cin >> v[i];
        bool ans = calculate(v , n);
        cout << (!ans ? "No" : "Yes") << endl;
    }
    return 0;
}