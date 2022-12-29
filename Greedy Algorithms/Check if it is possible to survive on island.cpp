//JAI SHREE RAM

//Check if you can survive for s days on an island where you can buy maximum of n units of food everyday except for sunday and m units of food is required to survive per day.
//Time Complexity = O(1)
//Space Complexity = O(1)

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int n, s, m;
        cin >> n >> s >> m;
        if(m > n)
        {
            cout << -1 << endl;
            continue;
        }
        s -= s / 7;
        int ans;
        ans = (s * m) % n ? (s * m) / n + 1 : s * m / n;
        cout << (ans <= s ? ans : -1) << endl;
    }
    return 0;
}