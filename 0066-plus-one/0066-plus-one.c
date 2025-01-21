int* plusOne(int* arr, int n, int* returnSize) {
    int* ans=(int*)malloc((n+1)*sizeof(int));
    int add=1;
    for(int i=n-1;i>=0;i--){
        int sum=arr[i]+add;
        ans[i+1]=sum%10;
        add=sum/10;
    }
    if(add>0){
        ans[0]=add;
        *returnSize=n+1;
    }
    else{
        for(int i=0;i<n;i++){
            ans[i]=ans[i+1];
        }
        *returnSize=n;
    }
    return ans;
}