int getSum(int a, int b) {
    if(a==b) return 2*b;
    if(a==0) return b;
    if(b==0) return a;
    while(b!=0){
        unsigned int sum=(unsigned int)a&b;
        a=a^b;
        b=sum<<1;
    } 
    return a;
}
