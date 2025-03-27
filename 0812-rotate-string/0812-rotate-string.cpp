class Solution {
public:
    bool rotateString(string s, string goal) {
        int n = s.size();
        int m = goal.size();
        if(n!=m){
            return false;
        }
        for(int i = 0; i<n ;i++){
            string r = s.substr(0,1);
            string l = s.substr(1,n);
            s = l+r;
            if(goal == (s)){
                return true;
            }
        }
        return false;

    }
};