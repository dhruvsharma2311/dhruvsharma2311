class Solution {
public:
    int removeDuplicates(vector<int>& a) {
        int n = a.size();
        int count = 1;
        for(int i = 1; i<n; i++){
            if(a[i-1] != a[i]){
                a[count] = a[i];
                count++;
            }
        }
        return count;
    }
};