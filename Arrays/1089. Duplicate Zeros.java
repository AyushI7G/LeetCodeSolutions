class Solution {
    public void duplicateZeros(int[] arr) {
        for(int i = 0; i < arr.length-1; i++){
            int j = arr.length-1;
            if(arr[i] == 0){
                while(j != i){
                    arr[j] = arr[j-1];
                    j--;
                }
                i++;
            }
        }
    }
}
