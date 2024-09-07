int compare(const void* a,const void* b){
    return (*(int*)a-*(int*)b);
}
int maxProductDifference(int* arr, int n){
    qsort(arr,n,sizeof(int),compare);
    int ans=(arr[n-1]*arr[n-2])-(arr[0]*arr[1]);
    return ans;
}