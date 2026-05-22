class NumMatrix {
   public:
    vector<vector<int>> mat;
    NumMatrix(vector<vector<int>>& matrix) {
        mat = matrix;
        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 1; j < matrix[0].size(); j++) {
                mat[i][j] = mat[i][j - 1] + matrix[i][j];
            }
        }

        for (int i = 1; i < matrix.size(); i++) {
            for (int j = 0; j < matrix[0].size(); j++) {
                mat[i][j] += mat[i - 1][j];
            }
        }
    }

    int sumRegion(int row1, int col1, int row2, int col2) {
        int total = mat[row2][col2];

        if (row1 > 0) total -= mat[row1 - 1][col2];

        if (col1 > 0) total -= mat[row2][col1 - 1];

        if (row1 > 0 && col1 > 0) total += mat[row1 - 1][col1 - 1];

        return total;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */