int compare(const void* a,const void* b){
    return (*(int*)a-*(int*)b);
}
int findContentChildren(int* g, int ge, int* s, int se) {
    qsort(g,ge,sizeof(int),compare);
    qsort(s,se,sizeof(int),compare);
    int a=0,b=0,count=0;
    while(a<ge && b<se){
        if(s[b]>=g[a]){
            count++;
            a++;
        }
        b++;
    }
    return count;
}