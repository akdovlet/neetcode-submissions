class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::map<int, bool> seen;

        for (auto i = 0; i < nums.size(); i++)
        {
            if (seen.contains(nums[i]))
                return (true);
            seen[nums[i]] = true;
        }
        return (false);
    }
};