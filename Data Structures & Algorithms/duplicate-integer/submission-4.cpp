class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_map<int, int> seen;

        for (auto i = 0; i < nums.size(); i++)
        {
            auto amount = ++seen[nums[i]];
            if (amount > 1)
                return (true);
        }
        return (false);
    }
};