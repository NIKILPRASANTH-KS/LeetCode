/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 int findMin(int *arr,int n){
    int minInd=0;
    int min=arr[0];
    int i;
    for(i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
            minInd=i;
        }
    }
    return minInd;
 }
int* getFinalState(int* nums, int n, int k, int multiplier, int* returnSize) {
    *returnSize=n;
    while(k>0){
        int ind=findMin(nums,n);
        nums[ind] = nums[ind]*multiplier;
        k--;
    }
    return nums;
}