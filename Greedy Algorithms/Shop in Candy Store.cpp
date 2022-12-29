//JAI SHREE RAM

//Find the maximum and minimum money that can be spent to buy n candies, if you get k candies for free on every purchase
//Time Complexity = O(nlogn)
//Space Complexity = O(n)


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
        int n, k;
        cin >> n >> k;
        vector<int> candies(n);
        for(int i = 0; i < n; i++)
        {
            cin >> candies[i];
        }
        int mx = 0, mn = 0, s = 0, e = n - 1;
        sort(candies.begin() , candies.end());
        while(s <= e)
        {
            mn += candies[s];
            e -= k;
            s++;
        }
        s = 0, e = n - 1;
        while(s <= e)
        {
            mx += candies[e];
            s += k;
            e--;
        }
        cout << mn << " " << mx << endl;
    }
    return 0;
}