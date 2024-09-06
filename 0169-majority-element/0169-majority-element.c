int compare(const void* a,const void* b){
    return(*(int*)a-*(int*)b);
}
int majorityElement(int* arr, int n) {
    if(n==0) return 0;
    if(n==1) return arr[0];
    int count=1;
    qsort(arr,n,sizeof(int),compare);
    for(int i=1;i<n;i++){
        if(arr[i]==arr[i-1]){
            count++;
        }
        if(count>n/2){
            return arr[i];
        }
    }
    return 0;
}