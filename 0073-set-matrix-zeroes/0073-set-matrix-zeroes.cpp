class Solution {
public:
     void setZeroes(vector<vector<int>>& a) {
        int col0 = 1; // To track if the first column should be zeroed
        int r = a.size();
        int c = a[0].size();

        // First pass: Use first row and first column as markers
        for(int i = 0; i < r; i++){
            if(a[i][0] == 0) col0 = 0; // Mark first column to be zeroed if needed
            for(int j = 1; j < c; j++){
                if(a[i][j] == 0){
                    a[i][0] = 0; // Mark row
                    a[0][j] = 0; // Mark column
                }
            }
        }

        // Second pass: Set matrix cells to zero based on markers (EXCEPT first column)
        for(int i = r - 1; i >= 0; i--) {
            for(int j = c - 1; j >= 1; j--) { // Start from column index 1
                if(a[i][0] == 0 || a[0][j] == 0){
                    a[i][j] = 0;
                }
            }
            // Finally, update the first column **after** processing the row
            if(col0 == 0) a[i][0] = 0;
        }
    }
};