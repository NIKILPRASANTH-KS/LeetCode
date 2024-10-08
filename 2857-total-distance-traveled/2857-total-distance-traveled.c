int distanceTraveled(int mainTank, int at){
    if(mainTank<5) return mainTank*10;
    int count=0;
    while(mainTank>4){
        if(mainTank>=5) mainTank-=5;
        count+=50;
        if(at>0){
            at-=1;
            mainTank+=1;
        }
        else break;
    }

    if(mainTank>0) count+=mainTank*10;
    return count;
}