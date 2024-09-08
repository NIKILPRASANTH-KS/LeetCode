int differenceOfSum(int* arr, int n) {
    int ds=0,es=0;
    for(int i=0;i<n;i++){
        int num=arr[i];
        es+=num;
        if(num>9){
            while(num>0){
                ds+=num%10;
                num/=10;
            }
        }
        else ds+=arr[i];
    }
    return abs(es-ds);
}