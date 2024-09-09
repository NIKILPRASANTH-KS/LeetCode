int xorOperation(int n, int start) {
    int* arr=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        int val=start+(2*i);
        arr[i]=val;
    }
    int result=0;
    for(int i=0;i<n;i++){
        result^=arr[i];
    }
    free(arr);
    return result;
}