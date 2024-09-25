int compare(const void* a,const void* b){
    return (*(int*)a-*(int*)b);
}
int addedInteger(int* nums1, int n1, int* nums2, int n2) {
    qsort(nums1,n1,sizeof(int),compare);
    qsort(nums2,n2,sizeof(int),compare);
    return nums2[0]-nums1[0];
}