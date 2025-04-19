class Solution {
public:
    bool isPalindrome(string a) {
        string str = "";
        for (int i = 0;i<a.size(); i++){
            // Keep digits as they are
            if (a[i] >= '0' && a[i] <= '9') {
                str += a[i];
            }
            // already lowercase
            else if ((a[i] >= 'a' && a[i] <= 'z')) {
                str += a[i];   
            // convert to lowercase
            } else if (a[i] >= 'A' && a[i] <= 'Z') {
                str += (a[i] + ('a' - 'A')); 
            }
        }
        int n = str.size();
        for(int i = 0; i<n/2; i++){
            if(str[i] != str[n-1-i]){
                return false;
            }
        }
        return true;
    }
};