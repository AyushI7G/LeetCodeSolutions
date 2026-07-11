class Solution {
    public int removeDuplicates(int[] nums) {
        for(int j = 0; j <nums.length-1; j++){
            if(nums[j] == nums[j+1]){
                nums[j] = 101;
            }
        }
        int k = 0;
        for(int j = 0; j < nums.length; j++){
            if(nums[j] != 101){
                k++;
            }
        }
        Arrays.sort(nums);
        return k;
    }
}
