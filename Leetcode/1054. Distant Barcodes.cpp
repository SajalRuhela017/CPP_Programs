// In a warehouse, there is a row of barcodes, where the ith barcode is barcodes[i].

// Rearrange the barcodes so that no two adjacent barcodes are equal. You may return any answer, and it is guaranteed an answer exists.

class Solution {
public:
    vector<int> rearrangeBarcodes(vector<int>& barcodes, int pos = 0) 
    {
        map<int, int> mp;
        set<pair<int, int>> s;
        for(int i = 0; i < barcodes.size(); i++)
            mp[barcodes[i]]++;
        for(auto it = mp.begin(); it != mp.end(); it++)
            s.insert({it->second, it->first});
        for(auto it = s.rbegin(); it != s.rend(); it++)
        {
            for(auto cnt = 0; cnt < it->first; ++cnt, pos += 2)
            {
                if(pos >= barcodes.size())
                    pos = 1;
                barcodes[pos] = it->second;
            }
        }
        return barcodes;
    }
};