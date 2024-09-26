bool isAnagram(char* s, char* t) {
    int* arr=(int*)calloc(26,sizeof(int));
    int lens=strlen(s);
    int lent=strlen(t);
    if(lens!=lent) return false;
    for(int i=0;i<lens;i++){
        arr[s[i]-'a']++;
    }
    for(int i=0;i<lent;i++){
        arr[t[i]-'a']--;
    }
    for(int i=0;i<26;i++){
        if(arr[i]!=0) return false;
    }
    return true;
}