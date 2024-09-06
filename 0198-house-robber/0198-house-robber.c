int rob(int* arr, int n) {
    if(n==0) return 0;
    if(n==1) return arr[0];
    int* robber=(int*)malloc(n*sizeof(int));
    robber[0]=arr[0];
    robber[1]=(arr[0]>arr[1])?arr[0]:arr[1];
    for(int i=2;i<n;i++){
        if(robber[i-1]>robber[i-2]+arr[i]){
            robber[i]=robber[i-1];
        }
        else{
            robber[i]=robber[i-2]+arr[i];
        }
    }
    int ans=robber[n-1];
    return ans;
}//2 7 11 11 12
//1 2 4 4

