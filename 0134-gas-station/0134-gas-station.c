int canCompleteCircuit(int* gas, int n, int* cost, int m) {
    int first=0,current=0;
    int totalcost=0,totalgas=0;
    for(int i=0;i<n;i++){
        current+=gas[i]-cost[i];

        if(current<0){
            first=i+1;
            current=0;
        }
        
        totalcost+=cost[i];
        totalgas+=gas[i];
    }
    if(totalgas-totalcost<0) return -1;
    return first;
}