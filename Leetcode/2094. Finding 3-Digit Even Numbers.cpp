// You are given an integer array digits, where each element is a digit. The array may contain duplicates.

// You need to find all the unique integers that follow the given requirements:

// The integer consists of the concatenation of three elements from digits in any arbitrary order.
// The integer does not have leading zeros.
// The integer is even.
// For example, if the given digits were [1, 2, 3], integers 132 and 312 follow the requirements.

// Return a sorted array of the unique integers.

class Solution {
    public:
    vector<int> findEvenNumbers(vector<int>& digits) 
    {
        vector<int> count(10, 0);
        for (auto& d : digits)
            count[d]++;

        vector<int> res;

        for (int num = 100; num < 999; num += 2) 
        {
            vector<int> currCount(10, 0);
            int temp = num;

            while (temp) 
            {
                currCount[temp % 10]++;
                temp /= 10;
            }
            bool flag = true;
            for (int i = 0; i < 10; i++) 
            {
                if (currCount[i] > count[i]) 
                {
                    flag = false;
                    break;
                }
            }
            if (flag) 
            {
                res.push_back(num);
            }
        }
        return res;
    }
};