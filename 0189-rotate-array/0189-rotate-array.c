void rotate(int *arr, int n, int k){
    k=k%n;
    if(k<0){
        k+=n;
    }
    int* brr=(int*)malloc(n*sizeof(int));
    if(brr==NULL){
        return;
    }
    for(int i=0;i<n;i++){
        brr[(i+k)%n]=arr[i];
    }
    for(int i=0;i<n;i++){
        arr[i]=brr[i];
    }
    free(brr);
    printf("[");
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
        if(i<n-1)
        printf(",");
    }
    printf("]");
}