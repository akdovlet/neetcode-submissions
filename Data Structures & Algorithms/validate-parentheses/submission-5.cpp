class Solution {
public:

    bool isOpeningBracket(char c)
    {
        return (c == '(' || c == '{' || c == '[');
    }

    bool isClosingBracket(char c)
    {
        return (c == ')' || c == '}' || c == ']');
    }

    char    matchClosingBracket(char c)
    {
        if (c == '(')
            return (')');
        else if (c == '{')
            return ('}');
        else
            return (']');
    }

    bool isValid(string s) 
    {
        vector<char> brackets;
        brackets.reserve(s.size());

        for (const char c: s)
        {
            if (isOpeningBracket(c))
                brackets.push_back(matchClosingBracket(c));
            else if (!brackets.empty() && c == brackets.back())
                brackets.pop_back();
            else if (isClosingBracket(c))
                return (false);
        }
        return (brackets.empty());
    }
};
