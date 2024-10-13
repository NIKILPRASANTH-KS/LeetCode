/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
//  int compare(const void * a,const void *b){
//     return (*(int*)a-*(int*)b);
//  }
int* findDisappearedNumbers(int* nums, int n, int* returnSize) {
    int* arr=(int*)malloc((n+1)*sizeof(int));
    for(int i=0;i<n+1;i++){
        arr[i]=0;
    }
    for(int i=0;i<n;i++){
        if (nums[i]>=1 && nums[i]<= n){
            arr[nums[i]]++;
        }
    }
    int count=0;
    int* brr=(int*)malloc(n*sizeof(int));
    for(int i=1;i<n+1;i++){
        if(arr[i]==0) brr[count++]=i;
    }
    *returnSize=count;
    return brr;
}