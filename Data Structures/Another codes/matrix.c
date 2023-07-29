#include <stdio.h>


//2 3
// 4 3 2 5 6 7 
//4 3 2
//5 6 7

int main(){
    int r,c,i,j;
    int mat[20][20];
    scanf("%d %d",&r,&c);
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    printf("\nMatrix is\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d\t",mat[i][j]);
        }
                    printf("\n");

    }
    if(r>c){
           for(i=c;i<4;i++){
            for(j=0;j<r;j++){
                mat[j][i]=1;
            }

        }
                     c=r;

    }
    else{
        if(r<c){
        for(i=r;i<c;i++){
            for(j=0;j<c;j++){
                mat[i][j]=1;
            }

        }

        }
                r=c;

    }
        printf("\n converted Matrix is\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d\t",mat[i][j]);
        }
                    printf("\n");

    }
    
    return 0;
}