class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& a) {
        int n = a.size();
        int count = 0 , ans = 0;
        for(int i = 0 ; i<n ; i++){
            if(a[i]==1){
                count++;
            }
            else{
                ans = max(count, ans);
                count = 0;
            }
        }
        ans = max(count , ans);
        return ans;
    }
};