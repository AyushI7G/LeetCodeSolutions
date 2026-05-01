int romanToInt(char* s) {
    int n = 0;
    for(int i = 0; s[i] != 0; i++){
        switch(s[i]){

            case 'I':
                if(s[i+1] == 'V' || s[i+1] == 'X'){
                    n -= 1;
                }
                else {
                    n += 1;
                }
                break;

            case 'V':
                n += 5;
                break;
            
            case 'X':
                if(s[i+1] == 'L' || s[i+1] == 'C'){
                    n -= 10;
                }
                else {
                    n += 10;
                }
                break;

            case 'L':
                n += 50;
                break;

            case 'C':
                if(s[i+1] == 'D' || s[i+1] == 'M'){
                    n -= 100;
                }
                else {
                    n += 100;
                }
                break;

            case 'D':
                n += 500;
                break;

            case 'M':
                n += 1000;
                break;
        }
    }
    return n;
}
