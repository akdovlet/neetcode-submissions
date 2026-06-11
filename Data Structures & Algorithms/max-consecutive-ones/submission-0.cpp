class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max = 0;
        int count = 0;
        for (auto i: nums)
        {
            if (i)
            {
                count++;
                if (count > max)
                    max = count;
            }
            else
                count = 0;
        }
        return max;
    }
};