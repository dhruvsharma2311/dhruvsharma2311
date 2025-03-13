class Solution {
public:
    int subarraySum(vector<int>& arr, int k) {
         int n = arr.size();
        map<int,int> mp;
        int preSum = 0, cnt = 0;
        mp[0] = 1;
        for (int i = 0; i < n; i++) {
            preSum += arr[i];
            int rem = preSum - k;
            cnt += mp[rem];
            mp[preSum] += 1;
        }
        return cnt;
    }
};