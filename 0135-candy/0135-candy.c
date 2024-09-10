int candy(int* arr, int n) {
    int max=0;
    int* a=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        a[i]=1;
    }
    for(int i=1;i<n;i++){
        if(arr[i]>arr[i-1]) a[i]=a[i-1]+1;
    }
    for(int i=n-2;i>=0;i--){
        if(arr[i]>arr[i+1] && a[i]<=a[i+1]) a[i]=a[i+1]+1;
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    return sum;
}