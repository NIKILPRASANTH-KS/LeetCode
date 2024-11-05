char * interpret(char * c){
    int n=strlen(c);
    char a[100];
    int j=0;
    for(int i=0;i<n;i++){
        if(c[i]=='G') a[j++]='G';
        else if(c[i]=='(' && c[i+1]==')'){
            a[j++]='o';
            i++;
        }
        else if(c[i]=='(' && c[i+1]=='a'){
            a[j++]='a';
            a[j++]='l';
            i+=3;
        }
    }
    a[j]='\0';
    char* ans=(char*)malloc((j+1)*sizeof(char));
    strcpy(ans,a);
    return ans;
}