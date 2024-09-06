int compare(const void* a,const void* b){
    return (*(int*)a-*(int*)b);
}
int* sortedSquares(int* arr, int n, int* returnSize) {
    int* brr=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        brr[i]=arr[i]*arr[i];
    }
    qsort(brr,n,sizeof(int),compare);
    *returnSize=n;
    return brr;
}