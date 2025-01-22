int findMaxConsecutiveOnes(int* arr, int n) {
    int count=0,maxcount=0;
    for(int i=0;i<n;i++){
        if(arr[i]==1) count++;
        else count=0;
        if(count>maxcount) maxcount=count;
    }
    return maxcount;
}