#include <stdlib.h>
#include <string.h>

char* longestCommonPrefix(char** strs, int strsSize) {
    char* res = (char*)malloc(strlen(strs[0]) + 1);
    char* lcp = strs[0];
    int k = 0;

    for (int j = 0; lcp[j] != '\0'; j++) {
        for (int i = 0; i < strsSize; i++) {
            if (lcp[j] != strs[i][j]) {
                res[k] = '\0';
                return res;
            }
        }
        res[k++] = lcp[j];
    }

    res[k] = '\0';
    return res;
}
