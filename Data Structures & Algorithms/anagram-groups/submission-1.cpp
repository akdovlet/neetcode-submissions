class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::map<std::vector<int>, std::vector<string>>   umap;
        std::vector<std::vector<std::string>>                       result;
        for (std::string& str: strs)
        {
            std::vector<int> arr(26, 0);
            for (char c: str)
                arr[c - 'a']++;
            umap[arr].push_back(str);
        }
        for (auto& [i, vec]: umap)
            result.push_back(vec);
        return (result);
    }
};
