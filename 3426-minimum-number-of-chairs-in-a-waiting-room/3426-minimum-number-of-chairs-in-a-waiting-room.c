int minimumChairs(char* s) {
    int count=0,maxcount=0;
    int len=strlen(s);
    for(int i=0;i<len;i++){
        if(s[i]=='E') count++;
        if(s[i]=='L') count--;
        if(count>maxcount) maxcount=count;
    }
    return maxcount;
}