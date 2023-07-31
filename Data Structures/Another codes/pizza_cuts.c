#include <stdio.h>

int main(){
    int input,output;
    scanf("%d",&input);

    if(input<0){
     output=-1;
    }else if(input==0){
      output=1;
    }
    else{
        //output=input+(input-1)+(input-1);
        output=(input*(input+1)/2)+1;
    }
    printf("%d",output);
    return 0;
}