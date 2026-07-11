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

/*
class Solution {
    public int missingNumber(int[] nums) {
        int n = nums.length;
        Arrays.sort(nums);
        if(nums[0] != 0){
            return 0;
        }
        if(nums[n-1] != n){
            return n;
        }
        for(int i = 0; i < n-1; i++){
            if(nums[i+1] - nums[i] != 1){
                return nums[i] + 1;
            }
        }
        return 0;
    }
}
*/
