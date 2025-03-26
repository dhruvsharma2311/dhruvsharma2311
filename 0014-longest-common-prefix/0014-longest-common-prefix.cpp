class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
        string ans = "";
        sort(s.begin(), s.end());
        int n = s.size();
        int smallest = min(s[0].size(), s[n-1].size());
        for(int i=0 ;i<smallest; i++){
            if(s[0][i] != s[n-1][i]){
                return ans;
            }
            ans = ans + s[0][i];
        }
        return ans;
    }
};