int findNonMinOrMax(int* arr, int n){
    int min=arr[0],max=arr[0];
    int ans=-1;
    for(int i=0;i<n;i++){
        if(arr[i]>max) max=arr[i];
        if(arr[i]<min) min=arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]!=min && arr[i]!=max) ans=arr[i];
    }
    return ans;
}