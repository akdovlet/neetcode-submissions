class Solution 
{
public:

    int climbStairs(int n) 
    {
        int one = 1;
        int two = 1;
        int curr = 1;

        while (n - 1)
        {
            curr = one + two;
            two = one;
            one = curr;
            n--;
        }
        return curr;
    }
};
