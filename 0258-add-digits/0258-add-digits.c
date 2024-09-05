int addDigits(int n) {
    if (n<10){
        return n;
    }
    int sum=0;
    while(n>0){
        int temp=n%10;
        sum+=temp;
        n/=10;
    }
    return addDigits(sum);     
}    