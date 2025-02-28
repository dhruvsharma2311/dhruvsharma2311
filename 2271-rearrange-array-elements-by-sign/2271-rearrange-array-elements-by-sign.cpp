class Solution {
public:
    vector<int> rearrangeArray(vector<int>& a) {
        int n = a.size();
        vector<int>v (n,0);

        int pos=0,neg=1;        

        for(int i=0; i<n ;i++){
            if(a[i]>0){
                v[pos] = a[i];
                pos+=2;
            }else{
                v[neg] = a[i];
                neg+=2;
            }
        }
        return v;
    }
};