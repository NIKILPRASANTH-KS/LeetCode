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
        else{
            end--;
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
// int start=0,end=n-1;
//     while(start<end){
//         int mid=start+(end-start)/2;
//         if(arr[mid]>arr[end]){
//             start=mid+1;
//         }
//         else if(arr[mid]<arr[end]){
//             end=mid;
//         }
//         else{
//             end--;
//         }
//     }
//     return arr[start];
//Testcase : 184
//start=0,end=3;s<e => true =>mid=0+(3-0)/2=>mid=1 =>arr[mid]==arr[end],mid=1
//end=3-1=2 =>start(0)<end(2)=>start=mid+1=>start=2=>false(2<2)=> return arr[start(2)]==1