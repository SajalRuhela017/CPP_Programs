/**            ॐ
 *      author : rhsajal_017
**/
 
#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define int long long
 
bool comp(pair<int, int> &a, pair<int, int> &b)
{
    if(a.second == b.second)
        return a.first > b.first;
    return a.second < b.second;
}

int maxPresentations(vector<int> scheduleStart, vector<int> scheduleEnd)
{
    int ans = 1, n = scheduleStart.size();
    vector<pair<int, int>> vp(n);
    for(int i = 0; i < n; ++i)
    {
        vp[i].first = scheduleStart[i];
        vp[i].second = scheduleEnd[i];
    }
    sort(vp.begin(), vp.end(), comp);
    int end = vp[0].second;
    for(int i = 1; i < n; i++)
    {
        if(vp[i].first >= end)
        {
            end = vp[i].second;
            ans++;
        }
    }
    return ans;
}
 
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> scheduleStart(n), scheduleEnd(n);
    for(int i = 0; i < n; i++)
        cin >> scheduleStart[i];
    for(int i = 0; i < n; i++)
        cin >> scheduleEnd[i];
    int ans = maxPresentations(scheduleStart, scheduleEnd);
    cout << ans << '\n';
    return 0;
}