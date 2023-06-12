// You are given a sorted unique integer array nums.

// A range [a,b] is the set of all integers from a to b (inclusive).

// Return the smallest sorted list of ranges that cover all the numbers in the array exactly. That is, each element of nums is covered by exactly one of the ranges, and there is no integer x such that x is in one of the ranges but not in nums.

// Each range [a,b] in the list should be output as:

// "a->b" if a != b
// "a" if a == b

class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums)
    {
        vector<string> ans;
        int i = 0;
        while(i < nums.size())
        {
            string temp = to_string(nums[i]);
            bool flag = false;
            while(i < nums.size() - 1 && nums[i + 1] - 1 == nums[i])
            {
                i++;
                flag = true;
            }
            if(flag)
            {
                temp += "->";
                temp += to_string(nums[i]);
            }
            ans.push_back(temp);
            i++;
        }
        return ans;
    }
};