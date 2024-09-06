bool detectCapitalUse(char* s) {
    int n=strlen(s);
    int flag;
    int cap=0,small=0;
    for(int i=0;i<n;i++){
        int val=s[i]-'A';
        if(val>=0 && val<=25){
            flag=i;
            cap++;
        }
        else if(val>=32 && val<=57){
            small++;
        }
    }
    if(cap>0 && small==0) return true;
    if(cap==0 && small>0) return true;
    if((cap==1 && small>0) && flag==0) return true;
    return false;
}