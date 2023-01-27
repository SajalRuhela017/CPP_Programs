/**
 *      author : rhsajal_017
**/

#include <bits/stdc++.h>
using namespace std;
 
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
        int v[n][n - 1];    
        // vector<vector<int>> values;   
        map<int , int> mp; 
        vector<pair<int , int>> temp;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n - 1; j++)
            {
                cin >> v[i][j];
            }
        }
        for(int i = 0; i < n - 1; i++)
        {
            set<int> st;
            vector<int> xtra;
            for(int j = 0; j < n; j++)
            {
                int s = st.size();
                st.insert(v[j][i]);
                if(s != st.size())
                    xtra.push_back(v[j][i]);
            }
            temp.push_back(make_pair(xtra[0] , xtra[1]));
        }
        priority_queue<int> pq;
        vector<int> okay;
        int x = temp[0].first, y = temp[0].second, x1 = temp[1].first, y1 = temp[1].second, val;
        if(x == x1 || x == y1)
        {
            val = y;
        }
        else
        {
            val = x;
        }
        cout << val << " ";
        unordered_map<int , int> um;
        for(int i = 0; i < temp.size(); i++)
        {
            x = temp[i].first, y = temp[i].second;
            if(x != val)
            {
                cout << x << " ";
                val = x;
            }
            else
            {
                cout << y << " ";
                val = y;
            }
        }
        cout << endl;
    }
    return 0;
}