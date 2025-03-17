class Solution {
public:
    int searchInsert(vector<int>& a, int t) {
        int n = a.size();
        int l = 0;
        int r = n-1;
        if(t < a[0]){
            return 0;
        }
        if(t > a[n-1]){
            return n;
        }
        while (l <= r){
            int mid = (l+r)/2;
            if(a[mid] == t){
                return mid;
            }
            else if(a[mid] > t ){
                r = mid - 1;
            }
            else{
                l = mid + 1;
            }
        }
        return l;
    }
};