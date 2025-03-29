class Solution {
public:
    bool comp(pair<char,int> &a , pair<char,int> &b){
        return (a.second > b.second);
    }
     // why is comp function which i have created is not working in this code but lambda function does pls somebody explain
    string frequencySort(string s) {
        int n = s.size();
        string ans = "";
        unordered_map<char ,int> mp;
        for(int i = 0; i<n; i++){
            mp[s[i]] ++;
        }
        vector<pair<char,int>> freq(mp.begin(),mp.end());
        sort(freq.begin(), freq.end(), [](pair<char, int> &a, pair<char, int> &b) {
            return a.second > b.second;});
        for( auto e : freq){
             ans.append(e.second, e.first);
        }
        return ans;
    }
};