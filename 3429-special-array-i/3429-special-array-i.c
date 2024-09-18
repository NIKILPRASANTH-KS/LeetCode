bool isArraySpecial(int* arr, int n) {
    int count=0;
    for(int i=1;i<n;i++){
        if((arr[i]%2!=0 && arr[i-1]%2==0)||(arr[i]%2==0 && arr[i-1]%2!=0)) count++;
        else return false;
    }
    return true;
}