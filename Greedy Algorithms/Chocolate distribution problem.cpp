//JAI SHREE RAM

//
//
//

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int n, m, mn = INT_MAX, diff = 0;
        cin >> n >> m;
        vector<int> candies(n);
        for(int i = 0; i < n; i++)
        {
            cin >> candies[i];
        }
        sort(candies.begin() , candies.end());
        for(int i = 0; i < n - m; i++)
        {
            diff = candies[i + m - 1] - candies[i]; 
            mn = min(diff , mn);
        }
        cout << mn << endl;
    }
    return 0;
}