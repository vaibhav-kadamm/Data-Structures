#include <stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    char arr[100];
    int r,n,i;
    scanf("%d",&n);
    while (n>0)
    {
        r=n%2;
        arr[i]=48+r;
        n/=2;
        i++;
    }
    arr[i]='\0';
    strrev(arr);
    n=atoi(arr);

    printf("%d",n);

    
    return 0;
}