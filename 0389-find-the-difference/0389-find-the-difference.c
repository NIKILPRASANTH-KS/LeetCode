int compare(const void* a,const void* b){
    return (*(char*)a-*(char*)b);
}
char findTheDifference(char* s, char* t) {
    int lent=strlen(t);
    int lens=strlen(s);
    int temp=-1;
    qsort(s,lens,sizeof(char),compare);
    qsort(t,lent,sizeof(char),compare);
    for(int i=0;i<lent;i++){
       if(s[i]!=t[i]) return t[i];
    }
    if(temp==-1) temp=lent;
    return t[temp];
}