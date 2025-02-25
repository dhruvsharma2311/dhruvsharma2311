class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int c=0,c1=0,c2=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                c++;
            }
            else if(nums[i]==1){
                c1++;
            }
            else{
                c2++;
            }
        }
        for(int i=0;i<c;i++){
            nums[i]=0;
        }
        for(int i=c;i<c+c1;i++){
            nums[i]=1;
        }
        for(int i=c1+c;i<c2+c1+c;i++){
            nums[i]=2;
        }
    }
};