class Solution {
public:
    void rotate(vector<vector<int>>& a) {
        int r = a.size();
         int c = a[0].size();
         for(int i = 0; i<r ; i++){
            for(int j = i+1; j<c; j++){
                swap( a[i][j], a[j][i] );
            }
         }
         for(int i = 0; i<r; i++){
            int low = 0;
            int high = c-1;
            while(low < high){
                swap(a[i][low], a[i][high]);
                low ++ ;
                high --;
            } 
         }
    }
};