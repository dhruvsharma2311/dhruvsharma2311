class Solution {
public:
    int beautySum(string s) {
        int n = s.size();
        int sum = 0;
        for(int i = 0; i<n; i++){
            unordered_map<char,int> mp;
            for(int j = i; j<n; j++){
                mp[s[j]]++;
                if(j - i >= 2){
                    int maxf = INT_MIN;
                    int minf = INT_MAX;

                    for(auto e : mp){
                        maxf = max(maxf , e.second);
                        minf = min(minf , e.second);
                    }
                    sum += (maxf - minf);
                }
            }
        }
        return sum;
    }
};