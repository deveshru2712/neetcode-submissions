class NumMatrix {
   public:
    vector<vector<int>> ArrMatrix;
    NumMatrix(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        ArrMatrix.assign(n + 1, vector<int>(m + 1, 0));

        for (int i = 1; i <= m; i++) {
            ArrMatrix[1][i] = ArrMatrix[1][i - 1] + matrix[0][i - 1];
        }

        for (int j = 2; j <= n; j++) {
            ArrMatrix[j][1] = ArrMatrix[j - 1][1] + matrix[j - 1][0];
        }

        // i -> row and j -> column
        for (int i = 2; i <= n; i++) {
            for (int j = 2; j <= m; j++) {
                ArrMatrix[i][j] = ArrMatrix[i - 1][j] + ArrMatrix[i][j - 1] + matrix[i - 1][j - 1] -
                                  ArrMatrix[i - 1][j - 1];
            }
        }
    }

    int sumRegion(int row1, int col1, int row2, int col2) {
        row1 += 1;
        col1 += 1;
        row2 += 1;
        col2 += 1;
        return ArrMatrix[row2][col2] - ArrMatrix[row1 - 1][col2] - ArrMatrix[row2][col1 - 1] +
               ArrMatrix[row1 - 1][col1 - 1];
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */