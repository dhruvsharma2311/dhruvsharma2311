class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& a) {
        int n = a.size();
        vector<vector<int>> ans;
        sort(a.begin(), a.end());

        for(int i =0; i<n; i++){
            if(!ans.empty() && ans.back()[1] >= a[i][0]){
                
                ans.back()[1] = max( a[i][1], ans.back()[1]);
            }
            else{
                ans.push_back(a[i]);
            }
        }
        return ans;
    }
};