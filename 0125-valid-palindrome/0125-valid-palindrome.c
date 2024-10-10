bool isPalindrome(char* s) {
    int a=strlen(s);
    int start=0,end=a-1;
    while(start<=end){
        if(! isalpha(s[start]) && ! isdigit(s[start])) start++;
        else if(! isalpha(s[end]) && ! isdigit(s[end])) end--;
        else if(tolower(s[start++]) != tolower(s[end--])) return false;
    }
    return true;
}

// bool isPalindrome(char* s) {
//     int a=strlen(s),count=0;
//     for(int i=0;i<a;i++){
//         if(isalpha(s[i]) || s[i]>='0' && s[i]<='9') count++;
//     }
//     char* copy=(char*)malloc(count*sizeof(char));
//     char* org=(char*)malloc(count*sizeof(char));
//     int k=0;
//     for(int i=0;i<a;i++){
//         if(s[i]>='A' && s[i]<='Z') {
//             org[k++]=tolower(s[i]);
//         }
//         else if(s[i]>='a' && s[i]<='z' || s[i]>='0' && s[i]<='9') org[k++]=s[i];
//     }
//     int l=0;
//     for(int j=count-1;j>=0;j--){
//         copy[l++]=org[j];
//     }
//     for(int i=0;i<count;i++){
//         if(org[i]!=copy[i]) return false;
//     }
//     return true;
// }