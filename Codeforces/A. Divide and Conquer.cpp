#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t, k = 1;
    cin >> t;
    while(t--)
    {
        long long n, sum = 0, count = 0;
        cin >> n;
        vector<long long> v(n);
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
            sum += v[i];
        }
        if(sum & 1)
        {
            bool flag = true;
            while(flag)
            {
                count++;
                for(int i = 0; i < n; i++)
                {
                    int x = v[i] / pow(2 , count), y = sum;
                    y = y - v[i] + x;
                    if(y % 2 == 0)
                    {
                        flag = false;
                        break;
                    }
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}