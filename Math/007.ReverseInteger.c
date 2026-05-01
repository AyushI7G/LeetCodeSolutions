#include <limits.h>

int reverse(int x){
    int num = 0;
    int flag = 0;
    if(x < 0){                            //handling negative numbers
        if (x == INT_MIN) return 0; 
        x = -x;
        flag = 1;
    }

    while(x > 0){
        int r = x % 10;
        if (num > INT_MAX / 10) return 0; 
        num = r + num * 10;
        x = x / 10;
    }

    if(flag){
        return -num;
    }
    else{
        return num;
    }
}
