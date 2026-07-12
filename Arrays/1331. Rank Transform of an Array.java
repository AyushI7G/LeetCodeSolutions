class Solution {
    public int[] arrayRankTransform(int[] arr) {
        int[] copy = arr.clone();
        Arrays.sort(arr);
        int rank = 1;

        int [] ranks = new int [arr.length];

        for(int i = 0; i < arr.length; i++){
            if( i > 0 && arr[i-1] != arr[i]){
                rank++;
            }
            for(int j = 0; j < arr.length; j++){
                if(copy[j] == arr[i]){
                    ranks[j] = rank;
                }
            }
        }
        return ranks;
    }
}
