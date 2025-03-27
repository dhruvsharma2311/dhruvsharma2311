class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.size();
        int m = t.size();
        if(n != m){
            return false;
        }
        unordered_map<char, int> freq;
        // Increase count for string 's' and decrease for string 't'
        for (int i = 0; i < s.size(); i++) {
            freq[s[i]]++;
            freq[t[i]]--;
        }
        // Check if all counts are zero
        for (auto it : freq) {
            if (it.second != 0) return false;
        }
        return true;
    }
};