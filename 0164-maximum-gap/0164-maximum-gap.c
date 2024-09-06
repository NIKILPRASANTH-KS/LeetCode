int compare(const void* a,const void* b){
    return (*(int*)a-*(int*)b);
}
int maximumGap(int* arr, int n) {
    if(n==0) return 0;
    int dist=0;
    qsort(arr,n,sizeof(int),compare);
    for(int i=0;i<n-1;i++){
        int diff=abs(arr[i]-arr[i+1]);
        if(diff>dist){
            dist=diff;
        }
    }
    return dist;
}