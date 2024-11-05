int compare(const void* a,const void* b){
    return (*(double*)a-*(double*)b);
}
double findMedianSortedArrays(int *arr,int n,int *brr,int m){
    double* crr=(double*)malloc((m+n)*sizeof(double));
    for(int i=0;i<n;i++){
        crr[i]=arr[i];
    }
    for(int i=0;i<m;i++){
        crr[n+i]=brr[i];
    }
    int two=n+m;
    qsort(crr,two,sizeof(double),compare);
    int start=0,end=two-1;
    int mid=start+(end-start)/2;
    double k;
    if(two%2!=0){
        k=crr[mid];
    }
    else{
        k=(crr[mid]+crr[mid+1])/2;
    }
    return k;
}