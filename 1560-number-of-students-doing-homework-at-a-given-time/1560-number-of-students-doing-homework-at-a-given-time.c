int busyStudent(int* start, int n, int* end, int m, int queryTime) {
    int count=0;
    for(int i=0;i<n;i++){
        if(queryTime>=start[i] && queryTime<=end[i]){
            count++;
        }
    }
    return count;
}