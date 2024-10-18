bool canConstruct(char* rn, char* m) {
    int a=strlen(rn);
    int b=strlen(m);
    char* rna[26]={0};
    char* ma[26]={0};
    if(a>b) return false;
    for(int i=0;i<a;i++){
        rna[rn[i]-'a']++;
    }
    for(int i=0;i<b;i++){
        ma[m[i]-'a']++;
    }
    for(int i=0;i<26;i++){
        if(!(rna[i]<=ma[i])) return false;
    }
    return true;
}