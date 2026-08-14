class Solution {
public:
    bool isPalindrome(string s) 
    {
        int  i = 0;
        int j = s.size() - 1;
        
        while (i < j)
        {
            while (s[i] && !isalnum(s[i]))
                i++;
            while (s[j] && !isalnum(s[j]))
                j--;
            if (i >= j)
                break ;
            if (tolower(s[i++]) != tolower(s[j--]))
                return (false);
        }
        return (true);
    }
};
