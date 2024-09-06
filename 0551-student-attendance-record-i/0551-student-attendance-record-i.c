bool checkRecord(char* s) {
    int abc=0,late=0;
    int n=strlen(s);
    for(int i=0;i<n;i++){
        if(s[i]=='A') abc++;
        if(i>0 && i<n-1 && s[i]=='L' && s[i-1]=='L' && s[i+1]=='L') return false;
    }
    if(abc>1) return false;
    return true;
}