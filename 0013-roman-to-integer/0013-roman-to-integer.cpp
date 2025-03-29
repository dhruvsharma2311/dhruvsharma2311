class Solution {
public:
    int romanToInt(string s) {
       int n = s.size();
        unordered_map<char,int> mp;
        mp['I'] = 1;
        mp['V'] = 5;
        mp['X'] = 10;
        mp['L'] = 50;
        mp['C'] = 100;
        mp['D'] = 500;
        mp['M'] = 1000;

        int sum = 0;
        for(int i = n-1; i>=0; ){
            if(i>0 && ((s[i-1]=='I' && s[i]=='V') || 
                (s[i-1]=='I' && s[i]=='X'))){
               sum = sum + (mp[s[i]]-1);
                i = i-2;     

            }
            else if(i>0 && ((s[i-1]=='X' && s[i]=='L') ||
               (s[i-1]=='X' && s[i]=='C'))){
                sum = sum + (mp[s[i]]-10);
                i = i-2;
            }
            else if(i>0 && ((s[i-1]=='C' && s[i]=='D') ||
                (s[i-1]=='C' && s[i]=='M'))){

                sum = sum + (mp[s[i]]-100);
                i = i-2;
            }
            else{
                sum = sum + mp[s[i]];
                i--;
            }
        }
        return sum;
    }
};