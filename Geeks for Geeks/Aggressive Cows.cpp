class Solution {
public:
    int solve(int n, int k, vector<int> &stalls) 
    {
        sort(stalls.begin() , stalls.end());
        int low = 0, high = stalls[n - 1] - stalls[0], ans = 0, placed = 0;
        while(low <= high)
        {
            int placed = 1;
            int mid = (low + high) / 2;
            for(int i = 1, j = 0; i < stalls.size(); i++)
            {
                if(stalls[i] - stalls[j] >= mid)
                {
                    placed++;
                    j = i;
                }
                if(placed == k)
                    break;
            }
            if(placed >= k)
            {
                ans = max(mid , ans);
                low = mid + 1;
            }
            else
                high = mid - 1;
            
        }
        return ans;
    }
};