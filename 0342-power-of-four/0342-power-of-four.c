bool isPowerOfFour(int n) {
    if(n==1) return true;
    if(n<1 || n%4!=0 || n>=INT_MAX || n<=INT_MIN) return false;
    while(n>1){
        n/=4;
        if(n%4!=0 && n!=1){
            return false;
        }
    }
    return true;
}
