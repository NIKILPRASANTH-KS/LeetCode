int countSegments(char* s) {
    int n=strlen(s);
    int count=0;
    bool ans=false;
    for(int i=0;i<n;i++) {
        if (s[i]!=' '){
            if (!ans){
                count++;
                ans=true;
            }
        } 
        else ans=0;
    }
    return count;
}