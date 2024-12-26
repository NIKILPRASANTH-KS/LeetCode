int numberOfArithmeticSlices(int* arr, int numsSize) {
    if(numsSize<3) return 0;
    int totalcount=0,currcount=0;
    for(int i=2;i<numsSize;i++){
        if(arr[i-1]-arr[i-2]==arr[i]-arr[i-1]){
            currcount++;
            totalcount+=currcount;
        }
        else{
            currcount=0;
        }
    }
    return totalcount;
}