int arrangeCoins(int n) {
    int k=1,count=0;
    while(n>=k){
        n-=k;
        k++;
        count++;
    }
    return count;
}