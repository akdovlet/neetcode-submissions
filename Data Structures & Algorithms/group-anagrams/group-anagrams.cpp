#include <vector>
#include <string>

using namespace std;

class Solution {
public:

    bool                    isAnagram(const std::string &s, const std::string &t)
    {
        if (s.size() != t.size())
            return (false);
        int arr[26];
        int arr2[26];

        for (int i = 0; i < s.size(); i++)
        {
            ++arr[s[i] - 'a'];
            ++arr2[s[i] - 'a'];
        }
        for (int i = 0; i < 26; i++)
        {
            if (arr[i] != arr2[i])
                return (false);
        }
        return (true);
    }

    vector<vector<string>>  groupAnagrams(vector<string>& strs)
    {
        std::vector<vector<string>> result;

        for (auto i: strs)
        {
            for (auto j = 0; j < result.size(); j++)
            {
                if (result[j].size() && isAnagram(i, result[j][0]))
                {
                    result[j].push_back(i);
                    continue ;
                }
            }
            result.push_back(std::vector<string>{i});
        }
        return (result);
    }
};

