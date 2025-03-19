class Solution {
public:
    int fo(vector<int>& a, int t, int n){
        int l = 0;
        int r = n-1; 
        while (l <= r){
            int mid = (l+r)/2;
            if(a[mid] < t){
                l = mid + 1;
            }
            else if(a[mid] > t ){
                r = mid - 1;
            }
            else{
                if(mid==0 || a[mid-1]!=a[mid]){
                    return mid;
                }
                else{
                    r = mid -1;
                }
            }
        }
        return -1;
    }
    int lo(vector<int>& a, int t, int n){
        int l = 0;
        int r = n-1; 
        while (l <= r){
            int mid = (l+r)/2;
            if(a[mid] < t){
                l = mid + 1;
            }
            else if(a[mid] > t ){
                r = mid - 1;
            }
            else{
                if(mid == n - 1 || a[mid] != a[mid + 1]){
                    return mid;
                }
                else{
                    l = mid +1;
                }
            }
        }
        return -1;
    }
    vector<int> searchRange(vector<int>& a, int t) {
        vector<int> ans;
        int n = a.size();
        if(n==0){
            return {-1,-1};
        }
        int x = fo(a,t,n);
        int y = lo(a,t,n);
        return {x,y};
    }
};