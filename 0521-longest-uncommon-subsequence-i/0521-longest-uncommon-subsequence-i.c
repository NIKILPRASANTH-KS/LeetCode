int findLUSlength(char* a, char* b) {
    int alen=strlen(a);
    int blen=strlen(b);
    if((alen==blen)&& a[0]!=b[0] && a[alen-1]!=b[blen-1]) return alen;
    if(alen!=blen){
        return (alen>blen)?alen:blen;
    }

    int count=0,dupcount=0,flag=0;
    for(int i=0;i<alen;i++){
        if(a[i]!=b[i]){
            flag=1;
            dupcount++;
        }
        count++;
    }
    if (count>0 && flag==1) return count;
    if (count>0 && flag==0) return -1;
    return -1;
}