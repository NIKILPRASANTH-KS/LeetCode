int subtractProductAndSum(int n) {
    int sum=0,mul=1;
    while(n>0){
        int digit=n%10;
        sum=sum+digit;
        mul=mul*digit;
        n/=10;
    }
    return mul-sum;
}