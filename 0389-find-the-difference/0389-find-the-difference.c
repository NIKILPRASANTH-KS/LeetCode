char findTheDifference(char* s, char* t) {
    int lent=strlen(t);
    int lens=strlen(s);
    int sum=0;
    for(int i=0;i<lent;i++){
       sum+=t[i];
    }
    for(int i=0;i<lens;i++){
        sum-=s[i];
    }
    return (char)sum;
}