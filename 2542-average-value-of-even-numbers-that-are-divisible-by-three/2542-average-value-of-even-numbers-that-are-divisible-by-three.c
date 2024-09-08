int averageValue(int* arr, int n) {
    int sum=0,count=0;
    for(int i=0;i<n;i++){
        if(arr[i]%6==0){
            count++;
            sum+=arr[i];
    }
    }
    if  (count==0) return 0;
    return sum/count;
}