int* plusOne(int* arr, int n, int* returnSize) {
    if(arr[n-1]!=9){
        arr[n-1]++;
        int* brr=(int*)malloc(n*sizeof(int));
        for(int i=0;i<n;i++){
            brr[i]=arr[i];
        }
        *returnSize=n;
        return brr;
    }
    int* brr=(int*)malloc((n + 1)*sizeof(int));
    int add=1;
    for (int i=n-1;i>=0;i--){
        int sum=arr[i]+add; 
        brr[i+1]=sum%10;  
        add=sum/10;  
    }
    if(add>0){
        brr[0]=add;
        *returnSize=n+1;  
    } 
    else{
        for(int i=0;i<n;i++) {
            brr[i]=brr[i+1];  
        }
        *returnSize = n;  
    }
    return brr;
}


// int* plusOne(int* arr, int n, int* returnSize) {
//     int* result = (int*)malloc((n + 1) * sizeof(int));
    
//     int carry = 1;

//     for (int i = n - 1; i >= 0; i--) {
//         int sum = arr[i] + carry; 
//         result[i + 1] = sum % 10;  
//         carry = sum / 10;  
//     }

//     if (carry > 0) {
//         result[0] = carry;
//         *returnSize = n + 1;  
//     } else {
//         for (int i = 0; i < n; i++) {
//             result[i] = result[i + 1];  
//         }
//         *returnSize = n;  
//     }

//     return result;
// }
