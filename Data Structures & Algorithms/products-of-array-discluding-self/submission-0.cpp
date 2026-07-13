class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) 
    {
		vector<int> result;

		result.reserve(nums.size());
		
		int	i = 0;
		int pre = 1;
		int post = 1;
		while (i < nums.size())
		{
			result.push_back(pre);
			pre *= nums[i];
			i++;
		}
		while (i--)
		{
			result[i] *= post;
			post *= nums[i];
		}
        return (result);
    }
};
