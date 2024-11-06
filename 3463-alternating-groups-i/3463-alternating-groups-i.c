int numberOfAlternatingGroups(int* colors, int c) {
    int count=0;
    for(int i=1;i<c-1;i++){
        if(colors[i-1]!=colors[i] && colors[i+1]!=colors[i]) count++;
    }
    if(colors[c-1]!=colors[c-2] && colors[c-1]!=colors[0]) count++;
    if(colors[c-1]!=colors[0] && colors[1]!=colors[0]) count++;
    return count;
}