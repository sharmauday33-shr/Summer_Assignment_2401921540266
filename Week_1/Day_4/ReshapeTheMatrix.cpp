class Solution {
public:
    std::vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m = mat.size();
        int n = mat[0].size();
        if (m * n != r * c) {
            return mat;
        }
        
       
        vector<vector<int>> reshaped(r, vector<int>(c));
        
    
        for (int i = 0; i < m * n; ++i) {
            // Map the 1D index 'i' to the original mat coordinates
            int orig_row = i / n;
            int orig_col = i % n;
            
            // Map the 1D index 'i' to the new reshaped coordinates
            int new_row = i / c;
            int new_col = i % c;
            
            reshaped[new_row][new_col] = mat[orig_row][orig_col];
        }
        
        return reshaped;
    }
};
