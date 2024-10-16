int* replaceElements(int* arr, int n, int* returnSize) {
    int* brr=(int*)malloc(n*sizeof(int));
    int max=-1;
    for(int i=n-1;i>=0;i--){
        brr[i]=max;
        if(max<arr[i]) max=arr[i];
    }
    *returnSize=n;
    return brr;
}