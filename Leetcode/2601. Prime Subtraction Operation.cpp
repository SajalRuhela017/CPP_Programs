// You are given a 0-indexed integer array nums of length n.

// You can perform the following operation as many times as you want:

// Pick an index i that you haven’t picked before, and pick a prime p strictly less than nums[i], then subtract p from nums[i].
// Return true if you can make nums a strictly increasing array using the above operation and false otherwise.

// A strictly increasing array is an array whose each element is strictly greater than its preceding element.

class Solution {
public:
    vector<int> primes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113, 127, 131, 137, 139, 149, 151, 157, 163, 167, 173, 179, 181, 191, 193, 197, 199, 211, 223, 227, 229, 233, 239, 241, 251, 257, 263, 269, 271, 277, 281, 283, 293, 307, 311, 313, 317, 331, 337, 347, 349, 353, 359, 367, 373, 379, 383, 389, 397, 401, 409, 419, 421, 431, 433, 439, 443, 449, 457, 461, 463, 467, 479, 487, 491, 499, 503, 509, 521, 523, 541, 547, 557, 563, 569, 571, 577, 587, 593, 599, 601, 607, 613, 617, 619, 631, 641, 643, 647, 653, 659, 661, 673, 677, 683, 691, 701, 709, 719, 727, 733, 739, 743, 751, 757, 761, 769, 773, 787, 797, 809, 811, 821, 823, 827, 829, 839, 853, 857, 859, 863, 877, 881, 883, 887, 907, 911, 919, 929, 937, 941, 947, 953, 967, 971, 977, 983, 991, 997};
    
    bool primeSubOperation(vector<int>& nums) 
    {
        for(int i = primes.size() - 1; i >= 0; i--)
        {
            if(primes[i] < nums[0])
            {
                nums[0] -= primes[i];
                break;
            }
        }
        bool flag = true;
        for(int i = nums.size() - 2; i >= 1; i--)
        {
            if(nums[i] < nums[i + 1])
                continue;
            for(int j = 0; j < primes.size(); j++)
            {
                if(nums[i] - primes[j] < nums[i + 1] && nums[i] - primes[j] > 0)
                {
                    nums[i] -= primes[j];
                    break;
                }
            }
        }
        for(int i = 0; i < nums.size() - 1; i++)
        {
            int d = nums[i + 1] - nums[i];
            if(d <= 0)
            {
                flag = false;
                break;
            }
        }
        return flag;
    }
};