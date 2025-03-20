class Solution {
public:
    int search(vector<int>& a, int t) {
        int n = a.size();
        int l =0;
        int r = n-1;
        while(l<=r){
            int mid = (l+r)/2;
            if(a[mid] == t){
                return mid;
            }
            // left sorted hai toh
            else if(a[l] <= a[mid]){
                if(t<=a[mid] && t>=a[l]){
                    r = mid - 1;
                }
                else{
                    l = mid + 1;
                }
            }
            // Right sorted hai toh
            else{
                if(t>=a[mid] && t<=a[r]){
                    l = mid + 1;
                }
                else{
                    r = mid - 1;
                }
            }
        }
        return -1;
    }
};