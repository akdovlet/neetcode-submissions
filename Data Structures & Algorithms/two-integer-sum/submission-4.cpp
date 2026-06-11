class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        std::unordered_map<int, int> seen;
        for (auto i = 0; i < nums.size(); i++)
        {
            int complement = target - nums[i];
            if (seen.contains(nums[i]))
                return ((std::vector<int>){seen[nums[i]], i});
            seen[complement] = i;
        }
        return ((std::vector<int>) {});
    }
};
