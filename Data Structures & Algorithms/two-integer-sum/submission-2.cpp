class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        std::map<int, int> seen;
        for (auto i = 0; i < nums.size(); i++)
        {
            int complement = target - nums[i];
            if (seen.contains(nums[i]))
            {
                std::vector<int> result;
                result.push_back(seen[nums[i]]);
                result.push_back(i);
                return result;
            }
            seen.insert({complement, i});
        }
        return ((std::vector<int>) {});
    }
};
