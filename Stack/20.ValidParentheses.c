bool isValid(char* s) {
    int top = -1;
    char stack[10000];
    for(int i = 0; s[i] != '\0'; i++) {
        if(s[i] =='(' || s[i] =='[' || s[i] =='{') {
            top = top + 1;
            stack[top] = s[i];
        }
        else{
            if (top == -1){
                return false;
            }

            if(s[i] == ')' && stack[top] != '('){
                return false;
            }
            
            if(s[i] == ']' && stack[top] != '['){
                return false;
            }

            if(s[i] == '}' && stack[top] != '{'){
                return false;
            }
            top--;
        }
    }
    if(top == -1){
        return true;
    }
    else{
        return false;
    }
}
