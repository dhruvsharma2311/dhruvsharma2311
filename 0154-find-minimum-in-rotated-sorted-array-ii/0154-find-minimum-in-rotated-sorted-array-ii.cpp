class Solution {
public:
    int findMin(vector<int>& a) {
         int n = a.size();
        int l = 0;
        int r = n-1;
        int ans = INT_MAX;
        while(l<=r){
            int mid = (l+r)/2;
            if(a[mid] == a[l] && a[mid] == a[r]){
                ans = min(ans , a[mid]);
                l++;
                r--;
            }
            else if(a[mid]>a[r]){
                l = mid + 1;
            }
            else {
                ans = min(ans , a[mid]);
                r = mid -1;
            }
        }
        return ans;
    }
};