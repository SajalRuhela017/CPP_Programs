// Given two strings needle and haystack, return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.

class Solution {
public:
    int strStr(string haystack, string needle) 
    {
        if(haystack.find(needle) != string::npos)
            return haystack.find(needle);
        return -1;
    }
};