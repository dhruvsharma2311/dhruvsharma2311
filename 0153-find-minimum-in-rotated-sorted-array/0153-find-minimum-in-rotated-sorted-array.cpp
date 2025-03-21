class Solution {
public:
    int findMin(vector<int>& a) {
        int n = a.size();
        int ans = INT_MAX;
        int l = 0;
        int r = n-1;
        while(l<=r){
            int mid = (l+r)/2;
            if(a[l] <= a[mid]){
                ans = min(ans ,a[l]);
                l = mid + 1;
            }
            else{
                ans = min(ans , a[mid]);
                r = mid - 1;
            }
        }
        return ans;
    }
};