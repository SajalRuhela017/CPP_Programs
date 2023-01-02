#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int arr[3][3] = { {4, 7, 9}
                      {2, 5, 8}
                      {6, 7, 10} };
    priority_queue<int, vector<int>, greater<int>) pq;
    vector<int> ans;
    for(int i = 0; i < 3; i++)
    {
        pq.push(arr[0][i]);
    }
    int x = pq.top();
    ans.push_back(x);
    pq.pop();
    for(int i = 1; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            x = arr[j][i];
            pq.push(x);
            x = pq.top();
            ans.push_back(x);
            pq.pop();
        }
    }
    for(auto i : ans)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}