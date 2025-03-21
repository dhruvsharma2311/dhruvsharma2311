class Solution {
public:
    int findPeakElement(vector<int>& a) {
        int n = a.size();
        int l = 0;
        int r = n-1;
        if(n==1){
            return 0;
        }
        if(a[0]>a[1]){
            return 0;
        }
        if(a[n-1] > a[n-2]){
            return n-1;
        }
        while(l<=r){
            int mid = (l+r)/2;
            if(a[mid] > a[mid+1] && a[mid] > a[mid-1]){
                return mid;
            }
            if(a[mid] < a[mid+1]){
                l = mid + 1;
            }
            else{
                r = mid - 1;
            }
        }
        return -1;
    }
};