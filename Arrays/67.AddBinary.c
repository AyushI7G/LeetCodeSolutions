#include <stdlib.h>

char* addBinary(char* a, char* b) {
    int i = 0, j = 0, alen = 0, blen = 0, k = 0;

    while(a[i] != '\0'){
        alen++;
        i++;
    }
    while(b[j] != '\0'){
        blen++;
        j++;
    }

    int maxLen;
    if(alen > blen){
        maxLen = alen;
    } else {
        maxLen = blen;
    }

    char* sum = (char*)malloc(maxLen + 2);
    k = maxLen;
    sum[k + 1] = '\0';
    i = alen - 1;
    j = blen - 1;
    int carry = 0;

    while(i >= 0 || j >= 0 || carry == 1){
        int digitA = 0;
        int digitB = 0;

        if(i >= 0){
            digitA = a[i] - '0';
        }
        if(j >= 0){
            digitB = b[j] - '0';
        }

        int res = digitA + digitB + carry;
        if(res == 0){
            sum[k] = '0';
            carry = 0;
        }
        else if(res == 1){
            sum[k] = '1';
            carry = 0;
        }
        else if(res == 2){
            sum[k] = '0';
            carry = 1;
        }
        else{ 
            sum[k] = '1';
            carry = 1;
        }
        i--;
        j--;
        k--;
    }
    return &sum[k + 1];
}










af jldkjflak flk lf 
ja dfjk hfkjs hf alkfj k
idha fja fhas kfkj f
  safk haksjf akjhf kjjk
