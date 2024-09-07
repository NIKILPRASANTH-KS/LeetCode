int largestAltitude(int* gain, int n) {
    int* arr=(int*)malloc((n+1)*sizeof(int));
    arr[0]=0;
    for(int i=0;i<n;i++){
        arr[i+1]=arr[i]+gain[i];//0 -5 -4 1 1 -6
    }
    int max=arr[0];
    for(int i=0;i<n+1;i++){
        if(arr[i]>=max){
            max=arr[i];
        }
    }
    return max;
}