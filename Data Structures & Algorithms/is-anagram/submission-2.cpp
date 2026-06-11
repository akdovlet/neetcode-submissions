class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size())
            return (false);
        int arr[26] = {0};
        int arr2[26] = {0};
        for (auto i = 0; i < s.size(); i++)
        {
            arr[s[i] - 'a']++;
            arr2[t[i] - 'a']++;
        }
        for (auto i = 0; i < 26; i++)
        {
            if (arr2[i] != arr[i])
                return (false);
        }
        return (true);
    }
};
