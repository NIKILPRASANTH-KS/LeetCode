int sumOfTheDigitsOfHarshadNumber(int x) {
    int org=x,sum=0;
    while(x>0){
        sum+=x%10;
        x/=10;
    }
    if(org%sum==0) return sum;
    return -1;
}