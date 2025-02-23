class Solution {
public:
    void reverse(vector<int> &a, int st, int end){
        while(st<=end){
            swap(a[st],a[end]);
            st++;
            end--;
        }
    }
    void rotate(vector<int>& a, int k) {
        int n = a.size();
        k = k%n ;
        if(k==0){
            return;
        }
        reverse(a,0,n-k-1);
        reverse(a,n-k,n-1);
        reverse(a,0,n-1);
    }
};