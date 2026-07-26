class Solution {
    public int missingNumber(int[] nums) {
        int n = nums.length;
        int currsum = 0;
        int expsum = (n*(n+1))/2;
        for(int i = 0; i < n; i++){
            currsum += nums[i];
        }
        return expsum - currsum;
    }
}
