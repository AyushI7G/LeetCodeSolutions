class Solution {
    public int trap(int[] height) {
        int n = height.length;
        //calculating left max boundary
        int[] leftbound = new int [n];
        leftbound[0] = height[0];
        for(int i = 1; i < n; i++){
            if(height[i] > leftbound[i-1]){
                leftbound[i] = height[i];
            }
            else{
                leftbound[i] = leftbound[i-1];
            }
        }
        //calculating right max boundary
        int[] rightbound = new int [n];
        rightbound[n-1] = height[n-1];
        for(int i = n-2; i >= 0; i--){
            if(height[i] > rightbound[i+1]){
                rightbound[i] = height[i];
            }
            else{
                rightbound[i] = rightbound[i+1];
            }
        }
        //calculating trapped water
        int waterheight = 0, totalwater = 0;
        for(int i = 0; i < n; i++){
            waterheight = Math.min(leftbound[i], rightbound[i]);
            if(waterheight > height[i]){
                totalwater += (waterheight - height[i]);
            }
        }
        return totalwater;
    }
}
