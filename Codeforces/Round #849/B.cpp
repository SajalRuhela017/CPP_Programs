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
        string s;
        cin >> s;
        bool flag = false;
        int x = 0, y = 0;
        for(int i = 0; i < n; i++)
        {
            switch(s[i])
            {
                case 'L':
                    x--;
                    break;
                
                case 'R':
                    x++;
                    break;

                case 'U':
                    y++;
                    break;

                case 'D':
                    y--;
                    break;
            }
            if(x == 1 && y == 1)
            {
                flag = true;
                break;
            }
        }
        cout << (flag ? "YES" : "NO") << endl;
    }
    return 0;
}