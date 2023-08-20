/**            ॐ
 *      author : rhsajal_017
**/

#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define int long long

int FindContiguousSeq(int input1, int input2[])
{
    int curr_sum = 0;
    vector<int> sum;
    for(int i = 0; i < input1; i++)
    {
        if(input2[i] > 0)
            curr_sum += input2[i];
        else
        {
            sum.push_back(curr_sum);
            curr_sum = 0;
        }
    }
    sum.push_back(curr_sum);
    sort(sum.begin(), sum.end());
    return sum.back();
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tt, k = 1;
    cin >> tt;
    while(tt--)
    {
        int n;
        cin >> n;
        int v[n];
        for(int i = 0; i < n; i++)
            cin >> v[i];
        cout << FindContiguousSeq(n, v) << '\n';
    }
    return 0;
}