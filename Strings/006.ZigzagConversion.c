#include <stdlib.h>
#include <string.h>

char* convert(char* s, int numRows) {
    if (numRows == 1) return s;

    int len = strlen(s);
    char* res = (char*)malloc((len + 1) * sizeof(char));
    
    int cycle = 2 * numRows - 2;
    int k = 0;

    for (int i = 0; i < numRows; i++) {
        for (int j = i; j < len; j += cycle) {
            res[k++] = s[j];

            int diag = j + cycle - 2 * i;
            if (i != 0 && i != numRows - 1 && diag < len) {
                res[k++] = s[diag];
            }
        }
    }

    res[k] = '\0';
    return res;
}
