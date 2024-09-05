bool isHappy(int n) {
    int sum=0;
    do{
        sum=0;
        while(n){
            int digit=n%10;
            sum+=digit*digit;
            n/=10;
        }
        n=sum;
    } while(n>9);

    return sum==1 || sum==7;
}