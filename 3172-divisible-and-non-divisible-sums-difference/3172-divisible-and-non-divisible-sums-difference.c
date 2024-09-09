int differenceOfSums(int n, int m) {
    int ds=0,ns=0;
    for(int i=1;i<=n;i++){
        if(i%m!=0) ns+=i;
        if(i%m==0) ds+=i;
    }
    return ns-ds;   
}