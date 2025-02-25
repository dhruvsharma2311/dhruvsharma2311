class Solution {
    public int majorityElement(int[] a) {
        int n = a.length;
        int maj = 0;
        int count = 1;
        for(int i = 1; i<n; i++){
            if(a[maj] == a[i]){
                count++;
            }
            else
                count--;
            if(count == 0){
                maj = i;
                count = 1;
            }
        }
        count = 0;
        for(int i = 0; i<n ;i++){
            if(a[maj]==a[i]){
                count++;
            }
        }
        if(count > (n/2))
            return a[maj];
        return 0;
    }
}