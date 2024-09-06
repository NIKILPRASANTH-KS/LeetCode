bool canAliceWin(int* arr, int n) {
    int Alice=0,Bob=0;
    for(int i=0;i<n;i++){
        if(arr[i]>9){
            Alice+=arr[i];
        }
        else{
            Bob+=arr[i];
        }
    }
    
    return Alice>Bob || Bob>Alice;
}