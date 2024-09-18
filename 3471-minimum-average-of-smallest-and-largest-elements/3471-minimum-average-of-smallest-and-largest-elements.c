int compare(const void* a,const void* b){
    return (*(int*)a-*(int*)b);
}
double minimumAverage(int* nums, int n) {
    qsort(nums,n,sizeof(int),compare);
    double minavg = __DBL_MAX__;
    for(int i=0;i<n/2;i++){
        double min=nums[i];
        double max=nums[n-1-i];
        double avg=(min+max)/2.0;
        
        if(avg < minavg){
            minavg=avg;
        }
    }
    return minavg;
}