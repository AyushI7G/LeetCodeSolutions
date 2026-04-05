int removeElement(int* nums, int numsSize, int val) {
    for(int i = 0; i < numsSize; i++){
        if(nums[i] == val){
            numsSize--;
            for(int j = i; j < numsSize; j++){
                nums[j] = nums[j+1];
            }
            i--;
        }
    }
    return numsSize;
}
