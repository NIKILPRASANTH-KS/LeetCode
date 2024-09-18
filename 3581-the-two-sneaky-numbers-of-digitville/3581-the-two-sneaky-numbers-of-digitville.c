/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int compare(const void* a,const void* b){
    return (*(int*)a-*(int*)b);
}
int* getSneakyNumbers(int* nums, int numsSize, int* returnSize) {
    qsort(nums,numsSize,sizeof(int),compare);
    *returnSize=2;
    int* arr=(int*)malloc(2*sizeof(int));
    int k=0;
    for(int i=1;i<numsSize;i++){
        if(nums[i]==nums[i-1]) arr[k++]=nums[i-1];
    }
    return arr;
}