#include <string>

class Solution {
public:
    int calPoints(vector<string>& operations) 
    {
        vector<int>     record = {};
        int             sum = 0;

        for (const auto str: operations)
        {
            if (str[0] == 'C')
                record.pop_back();
            else if (str[0] == 'D')
                record.push_back(record.back() * 2);
            else if (str[0] == '+')
                record.push_back(record.back() + *(record.end() - 2));
            else
                record.push_back(std::stoi(str));
        }
    
        for (const auto i: record)
            sum += i;

        return (sum);
    }
};