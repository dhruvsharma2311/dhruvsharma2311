class Solution {
public:
    int maxArea(vector<int>& a) {
        int n = a.size();
        int i = 0;
        int j = n-1;
        int ans = 0;
        while (i<j){
            if(a[i]<a[j]){
                ans = max(ans , a[i]*(j-i));
                i++;
            }
            else{
                ans = max(ans , a[j]*(j-i));
                j--;
            }
        }
        return ans;
    }
};