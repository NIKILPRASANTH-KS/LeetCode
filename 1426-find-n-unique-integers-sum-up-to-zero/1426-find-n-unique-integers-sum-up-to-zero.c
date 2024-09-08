int* sumZero(int n, int* returnSize) {
    int* arr=(int*)malloc(n*sizeof(int));
    if(n%2==0){
        int i=0,j=1;
        while(i<n/2){
            arr[2*i]=j;
            arr[2*i+1]=-j;
            j++;
            ++i;
        }
    }
    if(n%2!=0){
         int i=0,j=1;
         while(i<n/2){
            arr[2*i]=j;
            arr[2*i+1]=-j;
            j=j+1;
            ++i;
        }
        arr[n-1]=0;
    }
    *returnSize=n;
    return arr;
}