// You are given two 0-indexed integer permutations A and B of length n.

// A prefix common array of A and B is an array C such that C[i] is equal to the count of numbers that are present at or before the index i in both A and B.

// Return the prefix common array of A and B.

// A sequence of n integers is called a permutation if it contains all integers from 1 to n exactly once.

class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B)
    {
        vector<int> ans;
        int n = A.size();
        set<int> s;
        vector<int> freq(51, 0);
        for(int i = 0; i < n; i++)
        {
            int match = 0;
            freq[A[i]]++;
            freq[B[i]]++;
            for(int j = 0; j <= 50; j++)
            {
                if(freq[j] == 2)
                    match++;
            }
            ans.push_back(match);
        }
        return ans;
    }
};