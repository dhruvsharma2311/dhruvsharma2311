class Solution {
public:
    int missingNumber(vector<int>& a) {
        int N = a.size();
        //Summation of first N numbers:
        int s1 = (N * (N + 1)) / 2;

        //Summation of all array elements:
        int s2 = 0;
        for (int i = 0; i < N ; i++) {
            s2 += a[i];
        }

        int missingNum = s1 - s2;
        return missingNum;
    }
};