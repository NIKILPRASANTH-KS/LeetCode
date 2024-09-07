int sumOfUnique(int* arr, int n) {
    int* frq=(int*)malloc(n*sizeof(int));
    int result=0;
    for(int i=0;i<n;i++){
        frq[i]=-1;
    }
    for(int i=0;i<n;i++){
        int count=1;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
                frq[j]=0;
            }
        }
        if(frq[i]!=0) frq[i]=count;
    }
    int sum=0;
    for(int i=0;i<n;i++){
        if(frq[i]==1){
            sum+=arr[i];
        }
    }
    return sum;
}