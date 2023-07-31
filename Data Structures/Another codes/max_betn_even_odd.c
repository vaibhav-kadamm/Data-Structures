#include <stdio.h>

int main(){
    //1 2 3 4
    // 1+3=4
    //2+4=6
    int odd=0,even=0;
    int i,n,value;
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        scanf("%d",&value);
        if(value%2==0){
            even+=value;
        }
        else{
            odd+=value; 
        }

    }
    if(even>odd){
        printf("%d",even-odd);
    }
    else{
        printf("%d",odd-even);
            }
    return 0;
}