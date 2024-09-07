int arraySign(int* arr, int n) {
    int nc=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0) return 0;
        if(arr[i]<0) nc++;
    }
    if(nc%2!=0) return -1;
    return 1;
}