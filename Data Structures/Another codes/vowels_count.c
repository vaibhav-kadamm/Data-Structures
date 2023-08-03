#include <stdio.h>


int getVowelsCount(char s[]){
    int i,cnt=0;
    for(i=0;s[i]!='\0';i++){
        if(s[i]=='A'|| s[i]=='a'||s[i]=='E'|| s[i]=='e'||s[i]=='I'|| s[i]=='i'|| s[i]=='O'|| s[i]=='o'||s[i]=='U'|| s[i]=='u'){
            cnt++;
        }

    }
    return cnt;
}
int main(){
    char s[100];
    scanf("%[^\n]s",s);
     int cnt=getVowelsCount(s);
     printf("%d",cnt);
    return 0;
}