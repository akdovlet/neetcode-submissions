class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) 
    {
        vector<map<int, int>>                          rows(9);
        vector<map<int, int>>                          col(9);
        map<pair<int, int>,  map <int, int>>    squares;
    
        for (int y = 0; y < 9; y++)
        {
            for (int x = 0; x < 9; x++)
            {
                if (board[y][x] == '.')
                    continue ;
                char c = board[y][x];
                if (++rows[y][c] > 1 || ++col[x][c] > 1 || ++squares[make_pair(y / 3, x / 3)][c] > 1)
                    return (false);
            }
        }
        return (true);
    }
};
