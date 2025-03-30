class Solution {
public:
    bool isPalindrome(string &s, int st, int end) {
        while (st < end) {
            if (s[st] != s[end]) {
                return false;
            }
            st++;
            end--;
        }
        return true;
    }

    string longestPalindrome(string s) {
        int n = s.size();
        if (n == 0) return "";

        string ans = "";

        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                if (isPalindrome(s, i, j)) {
                    if (j - i + 1 > ans.size()) {
                        ans = s.substr(i, j - i + 1);
                    }
                }
            }
        }

        return ans;
    }
};