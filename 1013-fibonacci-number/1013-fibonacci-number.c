int fib(int n){
    if(n==0) return 0;
    int first=0,second=1,third=first+second;
    for(int i=3;i<=n;i++){
        first=second;
        second=third;
        third=first+second;
    }
    return third;
}