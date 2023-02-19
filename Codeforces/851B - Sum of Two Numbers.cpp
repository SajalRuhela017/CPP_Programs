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
        long long n, i = 0;
        cin >> n;
        string s = to_string(n);
        bool flag = false;
        string x = "", y = "";
        for(auto c : s)
        {
            if(c == '0' || c == '2'|| c == '4'|| c == '6'|| c == '8')
            {
                int temp = c - '0';
                temp /= 2;
                x += (temp + '0');
                y += (temp + '0');
            }
            else
            {
                int temp = c - '0';
                temp /= 2;
                if(flag)
                {
                    x += (temp + '0');
                    y += (temp + '1');
                    flag = false;
                }
                else
                {
                    x += (temp + '1');
                    y += (temp + '0');
                    flag = true;
                }
            }
        }
        cout << stoi(x) << " " << stoi(y) << endl;
    }
    return 0;
}