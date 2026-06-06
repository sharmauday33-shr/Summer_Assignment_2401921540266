class Solution {
public:
    vector<vector<int>> generate(int nr) {
        vector<vector<int>> pt(nr);   // outer vector with nr rows

        for (int i = 0; i < nr; i++) {
            pt[i].resize(i + 1);      // each row has i+1 elements
            pt[i][0] = pt[i][i] = 1;  // first and last element = 1

            for (int j = 1; j < i; j++) {
                pt[i][j] = pt[i - 1][j - 1] + pt[i - 1][j];
            }
        }
        return pt;
    }
};
