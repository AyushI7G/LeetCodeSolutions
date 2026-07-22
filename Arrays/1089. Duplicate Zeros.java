class Solution {
    public void duplicateZeros(int[] arr) {
        int [] res = new int [arr.length];
        int j = 0;
        for(int i = 0; i < arr.length; i++){
            if(arr[j] == 0 && i != arr.length-1){
                res[i] = 0;
                i++;
                res[i] = 0;
            }
            else{
                res[i] = arr[j];
            }
            j++;
        }
        for(int i = 0; i < arr.length; i++){
            arr[i] = res[i];
        }S
    }
}
/*
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
*/
