class Solution {
public:
    int maxProfit(vector<int>& a) {
        int ans = 0;
        int n = a.size();
        int buy = a[0];
        for(int i =1; i<n; i++){
            if(a[i] < buy){
                buy = a[i];
            }
            else{
                int profit = a[i]-buy;
                ans = max(ans, profit);
            }
        }
        return ans;
    }
};