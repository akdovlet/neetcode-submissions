class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::map<int, int> seen;

        for (auto i = 0; i < nums.size(); i++)
        {
            auto value = ++seen[nums[i]];
            if (value > 1)
                return (true);
        }
        return (false);
    }
};