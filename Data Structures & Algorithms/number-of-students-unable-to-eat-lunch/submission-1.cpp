class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) 
    {
        int result = students.size();
        int count[2] = {};
        for (auto &lad: students)
        {
            count[lad]++;
        }
        for (auto subway: sandwiches)
        {
            if (count[subway] > 0)
            {
                count[subway]--;
                result--;
            }
            else
                return (result);
        }
        return (result);
    }
};