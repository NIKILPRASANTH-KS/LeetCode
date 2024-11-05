/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* arr, int n, int target, int* returnSize) {
    int* brr=(int*)malloc(2*sizeof(int));
    if(brr==NULL){
        returnSize=0;
        return 0;
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(target==arr[i]+arr[j]){
                brr[0]=i;
                brr[1]=j;
                *returnSize=2;
                return brr;
            }
        }
    }
    free(brr);
    *returnSize=0;
    return 0;
}