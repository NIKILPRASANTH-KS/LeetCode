int maxArea(int* arr, int n) {
    if(n<2) return 0;
    int left=0,right=n-1,maxvol=0;
    while(left<right){
        int height=(arr[left]<arr[right])?arr[left]:arr[right];
        int length=abs(left-right);
        if(arr[left]<arr[right]){
            left++;
        }
        else{
            right--;
        }
        int vol=length*height;
        if(vol>maxvol){
            maxvol=vol;
        }
    }
    return maxvol;
}