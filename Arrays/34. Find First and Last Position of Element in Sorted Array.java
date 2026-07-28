class Solution {
    public int[] searchRange(int[] nums, int target) {
        int res [] = new int [2];
        res[0] = -1;
        res[1] = -1;
        if(nums.length < 1){
            return res;
        }
        if(nums.length == 1){
            if(nums[0] == target){
                res[0] = 0;
                res[1] = 0;
                return res;
            }
        }
        int start = 0, end = nums.length-1, found = 0;
        int index = 0, minindex = 0, maxindex = 0;
        while(start <= end){
            int mid = (start + end)/2;
            if(nums[mid] == target){
                index = mid;
                found = 1;
                break;
            }
            if(target > nums[mid]){
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }
        if(found == 1){
            minindex = index;
            while(minindex >= 0 && nums[minindex] == target){
                res[0] = minindex;
                minindex--;
            }
            maxindex = index;
            while(maxindex < nums.length && nums[maxindex] == target){
                res[1] = maxindex;
                maxindex++;
            }
        }
        return res;
    }
}
