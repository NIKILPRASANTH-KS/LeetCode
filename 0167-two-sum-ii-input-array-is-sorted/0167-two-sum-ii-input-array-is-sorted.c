/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* arr, int n, int target, int* returnSize) {
    int* ans=(int*)calloc(2,sizeof(int));
    int start=0,end=n-1;
    *returnSize=2;
    while(start<end){
        if(arr[start]+arr[end]<target) start++;
        else if(arr[start]+arr[end]>target) end--;
        else{
            ans[0]=start+1;
            ans[1]=end+1;
            return ans;
        }
    }
    return ans;
}