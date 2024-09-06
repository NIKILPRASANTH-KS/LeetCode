int singleNumber(int* arr, int n) {
    int count=0;
    for(int i=0;i<n;i++){
        count^=arr[i];
    }
    return count;
}