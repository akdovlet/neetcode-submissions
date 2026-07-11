class Solution {
public:
    static string encode(vector<string>& strs) 
    {
        if (strs.empty())
            return (string{});
        string  result;

        for (auto const& str: strs)
        {
            result.append(to_string(str.size()));
            result.append("#");
            result.append(str);
        }
        return (result);
    }

    static int ak_atoi(const string& s, int& i)
    {
        int result = 0;

        while (i < s.size() && isdigit(s[i]))
        {
            result = result * 10 + (s[i] - '0');
            i++;
        }
        return (result);
    }
	
    static vector<string> decode(string s) 
    {
        int             i = 0;
        vector<string>  result;

        if (s.empty())
            return (vector<string> {});

        while (i < s.size())
        {
            int size = ak_atoi(s, i);
            if (s[i] == '#')
                i++;
            result.push_back(s.substr(i, size));
            i += size;
        }
        return (result);
    }
};