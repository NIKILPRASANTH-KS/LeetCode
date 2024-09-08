int ds(int i){
    int n=0;
    while(i>0){
        n+=i%10;
        i/=10;
    }
    return n;
}
int countEven(int num) {
    int count=0;
    for(int i=1;i<=num;i++){
        if(i>9){
            int n=ds(i);
            if(n%2==0) count++;
        }
        else if(i%2==0) count++;
    }
    return count;
}