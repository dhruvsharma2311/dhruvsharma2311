class Solution {
public:
    bool search(vector<int>& a, int t) {
        int n = a.size();
        int l = 0;
        int r = n-1;
        while(l<=r){
            int mid = (l+r)/2;
            if(a[mid] == t){
                return true;
            }
            else if(a[l] == a[mid] && a[mid] == a[r]){
                l++;
                r--;
            }
            else if(a[l] <= a[mid]){
                if(a[l] <= t && a[mid] >= t){
                    r = mid - 1;
                }
                else{
                    l = mid + 1;
                }
            }
            else{
                if(a[r] >= t && a[mid] <= t){
                    l = mid + 1;
                }
                else{
                    r = mid - 1;
                }
            }
        }
        return false;
    }
};