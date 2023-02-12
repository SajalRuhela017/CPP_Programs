/**
 *      author : rhsajal_017
**/

#include <bits/stdc++.h>
using namespace std;

int difference(int x , int y)
{
    int sumX = 0, sumY = 0;
    while(x)
    {
        sumX += (x % 10);
        x /= 10;
    }
    while(y)
    {
        sumY += (y % 10);
        y /= 10;
    }
    return abs(sumX - sumY);
}

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
        int x = (n + 1) / 2, y = n / 2;
        while(difference(x , y) > 1)
        {
            x++;
            y--;
        }
        cout << x << " " << y << endl;
    }
    return 0;
}