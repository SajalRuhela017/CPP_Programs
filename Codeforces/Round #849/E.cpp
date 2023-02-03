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
        vector<long long> v(n), temp(n);
        long long sum = 0, neg = 0;
        for(long long i = 0; i < n; i++)
        {
            cin >> v[i];
            sum += abs(v[i]);
            if(v[i] < 0)    neg++;
            temp[i] = abs(v[i]);
        }
        sort(temp.begin() , temp.end());
        if(neg & 1)
            sum -= 2 * temp[0];
        cout << sum << endl;

    }
    return 0;
}