#include <limits.h>

int myAtoi(char* s) {
    int i = 0, flag = 1;
    long res = 0;
    while(s[i] == ' '){          //ignores blankspace
        i++;
    }
    if(s[i] == '-' || s[i] == '+'){        //handles sign
        if(s[i] == '-'){
            flag = -1;
        }
        i++;
    }
    while(s[i] == '0'){         //skip zeroes
        i++;
    }
    while(s[i] >= '0' && s[i] <= '9'){
        res = res * 10 + (s[i] - '0');
        if(res * flag > INT_MAX){               //handles overflow
            return INT_MAX;
        }
        if(res * flag < INT_MIN){
            return INT_MIN;
        }
        i++;
    }
    return (int)(res * flag);
}
