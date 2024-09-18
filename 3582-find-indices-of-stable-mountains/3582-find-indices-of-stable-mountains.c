/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* stableMountains(int* height, int n, int threshold, int* returnSize) {
    int count=0;
    for(int i=1;i<n;i++){
        if(threshold<height[i-1]) count++;
    }
    int* arr=(int*)malloc(count*sizeof(int));
    int k=0;
    for(int i=1;i<n;i++){
        if(threshold<height[i-1]) arr[k++]=i; 
    }
    *returnSize=count;
    return arr;
}