class Solution {
public:
    int maxSubArray(vector<int>& a) {
        int n = a.size();
        int sum = 0;
        int res = a[0];
        for(int i = 0; i<n ; i++){
            sum = max(sum + a[i], a[i]);
            res = max(res, sum);
        }
        return res;
    }
};