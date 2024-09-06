int findMin(int* arr, int n) {
    int start=0,end=n-1;
    while(start<end){
        int mid=start+(end-start)/2;
        if(arr[mid]>arr[end]){
            start=mid+1;
        }
        else if(arr[mid]<arr[end]){
            end=mid;
        }
    }
    return arr[start];
}
// int findMin(int* arr, int n) {
//     int start=0,min=arr[0];
//     for(int i=0;i<n;i++){
//         if(arr[i]<min){
//             min=arr[i];
//             arr[start]=min;
//         }
//     }
//     return arr[start];
// }
//4 5 6 7 0 1 2  0+(6-0)/3=>mid=3(7)>>
//start=4(0) 4+(6-4)=5=>mid=5 =>end=5
//start=4 (5-4)/2=1/2=0 =>mid=4=>end=4