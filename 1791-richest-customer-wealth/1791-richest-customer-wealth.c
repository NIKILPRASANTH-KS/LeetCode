int maximumWealth(int** arr, int n, int* c) {
    int Maxsum=0,sum;
    for(int i=0;i<n;i++){
        sum=0;
        for(int j=0;j<*c;j++){
            sum = sum + arr[i][j];
        }
        if(sum>Maxsum){
            Maxsum=sum;
        }
    }
    return Maxsum;
}