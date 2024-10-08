bool validMountainArray(int* arr, int n){
    if(n<3) return false;
    if (arr[0]>arr[1]) return false;
    int mark=0,flag=0;
    for(int i=0;i<n-1;i++){
        if(arr[i]<arr[i+1]){
            mark=i+1;
        }
        else if(arr[i]==arr[i+1]) return false;
        else{
            flag=1;
            break;
        }
    }
    int i=mark;
    while(i<n-1){
        if(arr[i]<=arr[i+1]) return false;
        i++;
    }
    if(flag==0) return false;
    return true;
}
// bool validMountainArray(int* arr, int n){
//     if (n<=2) return false;
//     int mark,flag=0;
//     if (arr[0]>arr[1]) return false;
//     for(int i=0;i<n-1;i++){
//         if(arr[i+1]>arr[i]){
//             mark=i+1;
//         }
//         else if(arr[i+1]==arr[i]) return false;
//         else{
//             flag=1;
//             break;
//         }
//     }
//     int i=mark;
//     while(i<n-1){
//         if(!(arr[i+1]<arr[i])){
//             return false;
//         }
//         i++;
//     }
//     if (flag==1) return true;
//     return false;
// }