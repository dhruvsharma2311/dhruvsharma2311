class Solution {
public:
    void generateParentheses(int open, int close, string current, vector<string>& ans) {
        if (open == 0 && close == 0) {
            ans.push_back(current);
            return;
        }

        if (open > 0) {
            generateParentheses(open - 1, close, current + '(',ans);
        }

        if (close > open) {
            generateParentheses(open, close - 1, current + ')',ans);
        }
    }
    vector<string> generateParenthesis(int n) {
         vector<string> ans;
         string current = "";
         generateParentheses(n,n,current,ans);
         return ans;
    }
};