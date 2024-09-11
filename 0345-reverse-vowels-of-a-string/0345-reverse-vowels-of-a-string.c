char* reverseVowels(char* s) {
    int n=strlen(s);
    int start=0,end=n-1,count=0;
    char* ans=(char*)malloc(n*sizeof(char));
    for(int i=0;i<n;i++){
        if(s[i]=='a' ||s[i]=='e' ||s[i]=='i' ||s[i]=='o' ||s[i]=='u' ||s[i]=='A' ||s[i]=='E' ||s[i]=='I' ||s[i]=='O' ||s[i]=='U')
    ans[count++]=s[i];
}
    ans=(char*)realloc(ans,count*sizeof(int));
    for(int i=0;i<n;i++){
        if(s[i]=='a' ||s[i]=='e' ||s[i]=='i' ||s[i]=='o' ||s[i]=='u' ||s[i]=='A' ||s[i]=='E' ||s[i]=='I' ||s[i]=='O' ||s[i]=='U'){
            s[i]=ans[count-1];
            count--;
        }
    }
    return s;   
}