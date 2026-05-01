int mySqrt(int x) {
    int i = 1;
    if(x == 0) return 0;
    while(i <= x / i){
        if(i * i == x){
            return i;
        }
        i++;
    }

    return i - 1;
}
