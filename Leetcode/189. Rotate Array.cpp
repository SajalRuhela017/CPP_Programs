// Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.

    class Solution 
    {
    public:
        void rotate(vector<int>& nums, int k) 
        {
            int n = nums.size();
            if ((n == 0) || (k <= 0))
                return;
            
            int cntRotated = 0, start = 0, curr = 0, numToBeRotated = nums[0], tmp = 0;
            while (cntRotated < n)
            {
                do
                {
                    tmp = nums[(curr + k) % n];
                    nums[(curr + k) % n] = numToBeRotated;
                    numToBeRotated = tmp;
                    curr = (curr + k) % n;
                    cntRotated++;
                } while (curr != start);
                start++;
                curr = start;
                numToBeRotated = nums[curr];
            }
        }
    };