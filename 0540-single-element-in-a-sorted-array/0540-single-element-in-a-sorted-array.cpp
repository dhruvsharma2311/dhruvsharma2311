class Solution {
public:
    int singleNonDuplicate(vector<int>& a) {
        int n = a.size();
        int l = 0;
        int r = n-1;
        if(n==1){
            return a[0];
        }
        if(a[l]!=a[l+1]){
            return a[l];
        }
        if(a[r]!=a[r-1]){
            return a[r];
        }
        while(l<=r){
            int mid = (l+r)/2;
            if(a[mid]!=a[mid-1] && a[mid]!=a[mid+1]){
                return a[mid];
            }
            if((mid % 2 == 1 && a[mid] == a[mid - 1])
                || (mid % 2 == 0 && a[mid] == a[mid + 1])){
                    l = mid + 1;
            }
            else{
                r = mid - 1;
            }
        }
        return -1;
    }
};