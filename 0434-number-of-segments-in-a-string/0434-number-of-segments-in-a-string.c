int countSegments(char* s) {
    int n=strlen(s),count=0;
    bool space=false;
    for(int i=0;i<n;i++){
        if(s[i]!=' '){
            if(!space){
                count++;
                space=true;
            }
        }
        else space=false;
    }
    return count;
}
