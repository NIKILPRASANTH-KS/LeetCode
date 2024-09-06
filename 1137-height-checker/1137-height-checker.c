int compare(const void* a,const void* b){
    return (*(int*)a-*(int*)b);
}
int heightChecker(int* arr, int n) {
    int* brr=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        brr[i]=arr[i];
    }
    qsort(brr,n,sizeof(int),compare);
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=brr[i]){
            count++;
        }
    }
    return count;
}