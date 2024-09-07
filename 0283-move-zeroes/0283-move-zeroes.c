void moveZeroes(int* arr, int n) {
    int* brr=(int*)malloc(n*sizeof(int));
    int i=0,j=0;
    while(j<n){
        if(arr[j]!=0){
            brr[i++]=arr[j];
        }
        j++;
    }
    while(i<n){
        brr[i++]=0;
    }
    for(int a=0;a<n;a++){
        arr[a]=brr[a];
    }
    free(brr);
    printf("[");
    for(int a=0;a<n;a++){
        printf("%d",arr[a]);
        if(a<n-1){
            printf(",");
        }
    }
    printf("]");
}