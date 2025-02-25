import java.util.HashSet;

class Solution {
    public boolean containsNearbyDuplicate(int[] nums, int k) {
        HashSet<Integer> set = new HashSet<>();
        
        for (int i = 0; i < nums.length; i++) {
            if (set.contains(nums[i])) return true;  // Check for duplicate
            
            set.add(nums[i]);  // Add current element
            
            // Maintain the window size of at most k
            if (set.size() > k) set.remove(nums[i - k]);
        }
        
        return false;
    }
}
