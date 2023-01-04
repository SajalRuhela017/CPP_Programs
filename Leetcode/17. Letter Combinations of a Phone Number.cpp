// Given a string containing digits from 2-9 inclusive, return all possible letter combinations that the number could represent. Return the answer in any order.

// A mapping of digits to letters (just like on the telephone buttons) is given below. Note that 1 does not map to any letters.

class Solution {
public:
    const vector<string> pad = {
        "", "", "abc", "def", "ghi", "jkl",
        "mno", "pqrs", "tuv", "wxyz"
    };
    vector<string> letterCombinations(string digits) 
    {
        if (digits.empty()) return {};
		vector<string> result;
        result.push_back("");
        for(auto digit : digits) 
        {
            vector<string> tmp;
            for(auto candidate : pad[digit - '0'])
                for(auto s : result)
                    tmp.push_back(s + candidate);
            result.swap(tmp);
        }
        return result;   
    }
};