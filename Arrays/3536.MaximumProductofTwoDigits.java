class Solution {
    public int maxProduct(int n) {
        int max = 0, max2 = 0;
        while(n > 0){
            int digit = n % 10;
            n = n / 10;
            if(digit > max){
                max2 = max;
                max = digit;
            }
            else if(digit > max2){
                max2 = digit;
            }
        }
        return max * max2;
    }
}

/*
class Solution {
    public int maxProduct(int n) {
        int num = n;
        int count = 0;
        while(num > 0){
            count++;
            num = num/10;
        }
        int [ ] arr = new int [count];
        num = n;
        for(int i = 0; i < count; i++){
            int r = num % 10;
            num = num / 10;
            arr[i] = r;
        }
        Arrays.sort(arr);
        return arr[count-1] * arr[count-2];
    }
}
*/
