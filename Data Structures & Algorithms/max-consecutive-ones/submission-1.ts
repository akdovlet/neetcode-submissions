class Solution {
    /**
     * @param {number[]} nums
     * @return {number}
     */
    findMaxConsecutiveOnes(nums: number[]): number {
        let count: number = 0;
        let max: number = 0;

        for (let i = 0; i < nums.length; i++)
        {
            if (nums[i] === 1)
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
}
