int strStr(char* haystack, char* needle) {
    int i = 0, len = 0, j = 0;
    while(needle[j] != '\0'){
        len++;
        j++;
    }
    if(len == 0){
        return -1;
    }
    while(haystack[i] != '\0'){
        int j = 0;
        while(haystack[i+j] != '\0' && haystack[i+j] == needle[j]){
            j++;
        }
        if(j == len){
            return (i);
        }
        i++;
    }
    return -1;    
}
