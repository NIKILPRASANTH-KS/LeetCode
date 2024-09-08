int self(int n){
    int divcount=0,count=0,org=n;
    while(n>0){
        count++;
        int digit=n%10;
        if(digit != 0 && org % digit == 0) divcount++;
        n/=10;
    }
    return count==divcount;
}
int* selfDividingNumbers(int l, int r, int* returnSize) {
    int ind=(r-l)+1;
    int* arr=(int*)malloc(ind*sizeof(int));
    int count=0;
    for(int i=l;i<=r;i++){
        if(self(i)){
            arr[count++]=i;
        }
    }
    *returnSize=count;
    arr=(int*)realloc(arr,count*sizeof(int));
    return arr;
}