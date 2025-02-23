class Solution {
public:
    void moveZeroes(vector<int>& a) {
        int n = a.size();
        int k =0 ;
        for(int i = 0; i<n; i++){
            if(a[i]!=0){
                swap(a[i],a[k]);
                k++;
            }
        }
    }
};