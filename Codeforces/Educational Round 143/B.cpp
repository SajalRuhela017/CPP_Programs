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
        int n, k;
        cin >> n >> k;
        vector<vector<int>> v(n);
        for(int i = 0; i < n; i++)
        {
            vector<int> temp(2);
            cin >> temp[0] >> temp[1];
            v[i] = temp;
        }
        vector<int> freq(51 , 0);
        for(int i = 0; i < n; i++)
        {
            for(int j = v[i][0]; j <= v[i][1]; j++)
            {
                freq[j]++;
            }
        }
        for(int i = 0; i < n; i++)
        {
            if(!(v[i][0] <= k && v[i][1] >= k))
            {
                for(int j = v[i][0]; j <= v[i][1]; j++)
                {
                    freq[j]--;
                }
            }
        }       
        bool flag = true;
        for(int i = 1; i < 51; i++)
        {
            if(i == k)  continue;
            if(freq[i] >= freq[k])
            {
                flag = false;
                break;
            }
        }
        cout << (flag ? "YES" : "NO") << endl;
    }
    return 0;
}