int countCompleteDayPairs(int* arr, int n) {
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int sum=arr[i]+arr[j];
            if(sum % 24==0){
                count++;
            }
        }
    }
    return count;
}