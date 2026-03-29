int lengthOfLastWord(char* s) {
    if(s == NULL){
        return 0;
    }
    int i = 0, len = 0;
    while(s[i] != '\0'){
        len++;
        i++;
    }
    i = len-1;
    while(i >= 0 && s[i] == ' '){
        i--;
    }
    len = 0;
    while(i >= 0 && s[i] != ' '){
        i--;
        len++;
    }
    return len;
}
