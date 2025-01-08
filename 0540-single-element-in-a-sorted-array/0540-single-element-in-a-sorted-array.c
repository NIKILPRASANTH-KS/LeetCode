int singleNonDuplicate(int* nums, int n) {
    int start=0,end=n-1;
    while(start<end){
        int mid=start+(end-start)/2;
        if(mid%2==1) mid--;
        if(nums[mid]==nums[mid+1]) start=mid+2;
        else end=mid;
    }

    return nums[start];
}

// int singleNonDuplicate(int* nums, int n) {
//     int result=0;
//     for(int i=0;i<n;i++){
//         result^=nums[i];
//     }
//     return result;
// }