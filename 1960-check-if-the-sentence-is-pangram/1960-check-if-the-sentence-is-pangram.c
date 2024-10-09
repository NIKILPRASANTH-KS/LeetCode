bool checkIfPangram(char* s) {
    int n=strlen(s);
    int* alpha=(int*)calloc(26,sizeof(int));
    for(int i=0;i<n;i++){
        alpha[s[i]-'a']++;
    }
    for(int i=0;i<26;i++){
        if(alpha[i]==0) return false;
    }
    return true;
}
