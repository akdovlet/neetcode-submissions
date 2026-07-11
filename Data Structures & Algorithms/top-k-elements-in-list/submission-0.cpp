class Solution 
{
public:
    void    insertionSort(vector<int>& nums)
    {
        if (!nums.size())
            return ;
        for (int i = 1; i < nums.size(); i++)
        {
            int key = nums[i];
            int j = i;
            while (j && nums[j - 1] > key)
            {
                swap(nums[j - 1], nums[j]);
                j--;
            }
            nums[j] = key;
        }
    }

    vector<int> topKFrequent(vector<int>& nums, int k) 
    {
        if (!k)
            return (vector<int>{});
        map<int, vector<int>> bucket;
        map<int, int>           hash;
        vector<int>             result;
        for (auto const& i: nums)
            hash[i]++;
        for (auto const& [key, value]: hash)
            bucket[value].push_back(key);
        for (auto& x: bucket)
            insertionSort(x.second);
        for (auto i = bucket.rbegin(); i != bucket.rend(); i++)
        {
            for (auto& j: i->second)
            {
                result.push_back(j);
                k--;
                if (!k)
                    return (result);
            }
        }
        return (result);
    }
};
