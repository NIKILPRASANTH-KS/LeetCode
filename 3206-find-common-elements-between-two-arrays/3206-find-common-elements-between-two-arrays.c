int* findIntersectionValues(int* arr, int n, int* brr, int m, int* returnSize) {
    int* crr=(int*)malloc(2*sizeof(int));
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i]==brr[j]){
                count++;
                break;
            }
        }
    }
    crr[0]=count;
    int count_1=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(brr[i]==arr[j]){
                count_1++;
                break;
            }
        }
    }
    crr[1]=count_1;
    *returnSize=2;
    return crr;
}