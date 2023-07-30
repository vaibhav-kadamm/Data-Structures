#include <stdio.h>

int main(){
    int num,multiply,times;
    scanf("%d",&num);
    scanf("%d",&multiply);
    scanf("%d",&times);

    int sum=num*multiply;
     printf("%d %d",num,sum);
    int i;
    for(i=1;i<=times-2;i++){
        sum=sum*multiply;
        printf(" %d",sum);

    }


    return 0;
}