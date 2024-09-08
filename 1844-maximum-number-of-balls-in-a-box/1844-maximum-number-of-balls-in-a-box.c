int ds(int i){
    int ans=0;
    while(i>0){
        ans+=i%10;
        i/=10;
    }
    return ans;
}
int countBalls(int lm, int hm) {
    int ind=hm+1;
    int* arr=(int*)calloc(ind,sizeof(int));
    for(int i=lm;i<=hm;i++){
        int sum=ds(i);
        arr[sum]++;    
    }
    int max=0;
    for(int i=0;i<ind;i++){
        if(arr[i]>max) max=arr[i];
    }
    free(arr);
    return max;
}