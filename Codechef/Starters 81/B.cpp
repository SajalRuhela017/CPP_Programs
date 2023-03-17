/**             ॐ
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
        if(n == 2)
        {
            cout << -1 << "\n";
        }
        else
        {
            vector<string> ans;
            string temp = "";
            int one = 1;
            for(int i = 0; i < n - 1; i++)
            {
                temp = "";
                int curr_one = 0;
                for(int j = 0; j < n; j++)
                {
                    if(curr_one < one)
                        temp += "1" , curr_one++;
                    else
                        temp += "0";
                }
                ans.push_back(temp);
                one++;
            }
            temp = "";
            for(int i = 0; i < n; i++)
            {
                if(i == n - 2)
                    temp += "0";
                else
                    temp += "1";
            }
            ans.push_back(temp);
            for(auto& i : ans)
                cout << i << "\n";
        }        
    }
    return 0;
}