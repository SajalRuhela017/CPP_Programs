//Maximum number of meetings that can be accomodated in a single room where only one meeting can held at a particular time
//Time Complexity = O(nlogn)
//Space Complexity = O(n)

#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int , int> a, pair<int , int> b)
{
    return a.second < b.second;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> start(n), end(n);
        for(int i = 0; i < n; i++)
            cin >> start[i];
        for(int i = 0; i < n; i++)
            cin >> end[i];
        vector<pair<int , int>> meet;
        for(int i = 0; i < n; i++)
        {
            pair<int , int> p = make_pair(start[i] , end[i]);
            meet.push_back(p);
        }
        sort(meet.begin() , meet.end() , cmp);
        int count = 1, end_time = meet[0].second;
        for(int i = 1; i < n; i++)
        {
            if(end_time < meet[i].first)
            {
                count++;
                end_time = meet[i].second;
            }
        }
        cout << count << endl;
    }
    return 0;
}