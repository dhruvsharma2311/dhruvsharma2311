class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int res = 0 ;
        for(int i = 0; i<n ; i++){
            vector<bool> v(256,false);
            for(int j = i; j<n ;j++){
                if(v[s[j]]==true){
                    break;
                }
                else{
                    v[s[j]] = true;
                    res = max(res, j-i+1);
                }
            }
        }
        return res;  
    }
};