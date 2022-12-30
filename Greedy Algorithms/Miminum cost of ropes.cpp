//JAI SHREE RAM

//Find miminmum cost of connecting all ropes into one if cost of connecting two ropes is the sum of their length.
//Time Complexity = O(nlogn)
//Space Complexity = O(n)

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        long long n;
        cin >> n;
        vector<long long> length(n);
        for(int i = 0; i < n; i++)
        {
            cin >> length[i];
        }
        if(n == 1)
        {
            cout << length[0] << endl;
        }
        long long cost = 0;
        priority_queue<long long , vector<long long> , greater<long long>> pq;
        for(int i = 0; i < n; i++)
        {
            pq.push(length[i]);
        }
        while(pq.size() > 1)
        {
            long long a = pq.top();
            pq.pop();
            long long b = pq.top();
            pq.pop();
            long long temp = a + b;
            cost += temp;
            pq.push(temp);
        }
        cout << cost << endl;
    }
    return 0;
}