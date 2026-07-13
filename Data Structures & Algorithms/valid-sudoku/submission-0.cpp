class Solution {
   public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for (int i = 0; i < 9; i++) {
            unordered_set<int> st;
            for (int j = 0; j < 9; j++) {
                if (board[i][j] != '.' && st.count(board[i][j]))
                    return false;
                else if (board[i][j] != '.')
                    st.insert(board[i][j]);
            }
        }

        for (int i = 0; i < 9; i++) {
            unordered_set<int> st;
            for (int j = 0; j < 9; j++) {
                if (board[j][i] != '.' && st.count(board[j][i]))
                    return false;
                else if (board[j][i] != '.')
                    st.insert(board[j][i]);
            }
        }

        map<pair<int, int>, unordered_set<int>> mp;
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                int k1 = i / 3, k2 = j / 3;
                pair<int, int> key = {k1, k2};
                if (board[i][j] == '.')
                    continue;
                else if (mp[key].count(board[i][j]) > 0)
                    return false;
                else
                    mp[key].insert(board[i][j]);
            }
        }
        return true;
    }
};
