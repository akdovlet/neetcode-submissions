class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) 
    {
        int starve = 0;
        while (students.size() && sandwiches.size())
        {
            if (students.front() == sandwiches.front())
            {
                students.erase(students.begin());
                sandwiches.erase(sandwiches.begin());
                starve = 0;
            }
            else
            {
                students.push_back(students.front());
                students.erase(students.begin());
                starve++;
            }
            if (starve == students.size())
                break ;
        }
        return (students.size());
    }
};