// Definition for a Pair
// class Pair {
// public:
//     int key;
//     string value;
//
//     Pair(int key, string value) : key(key), value(value) {}
// };
class Solution {
public:
    vector<vector<Pair>> insertionSort(vector<Pair>& pairs) 
    {
        vector<vector<Pair>> result;
        if (pairs.empty()) 
            return result;
        result.push_back(pairs);
        int i = 1;
        while (i < pairs.size())
        {
            Pair x = pairs[i];
            int j = i;
            while (j > 0 && pairs[j - 1].key > x.key)
            {
                swap(pairs[j], pairs[j - 1]);
                j--;
            }
            // pairs[j] = x;
            i++;
            result.push_back(pairs);
        }
        return (result);
    }
};
