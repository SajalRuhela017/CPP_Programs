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
        long long n, c, ans = 0;
        cin >> n >> c;
        vector<long long> v(n);
        vector<long long> temp;
        map<long long , long long> mp;
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
            temp.push_back(i + 1 + v[i]);
        }
        sort(temp.begin() , temp.end());
        long long val = 0;
        priority_queue<int> pq;
        for(int i = 0; i < n; i++)
        {
            if(c >= temp[i])
            {
                ans++;
                c -= temp[i];
            }
        }
        cout << ans << endl;
    }
    return 0;
}