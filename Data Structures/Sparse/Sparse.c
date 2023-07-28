
#include<stdio.h>

void accept(int[20][20],int,int);
void display(int[20][20],int,int);
void accept_sparse(int[20][3],int);
void display_sparse(int[20][3]);
void mat_to_smat(int[20][20],int,int,int[20][3]);
void smat_to_mat(int[20][3],int[20][20]);
void mat_trans(int[20][3]);
void smat_trans_to_fast(int[20][3]);


int main(){

/* 
1       2       3       4
0       9       0       7
0       6       0       6 */
while(1){
int ch;int mat[20][20];int rows,cols;int  smat[20][3],smrows;smat[0][2];
        printf("\n====Sparse Matrix Op=====\n");
        printf("\n1 : Accept Normal Matrix!!!");
        printf("\n2 : Display Normal Matrix!!!");
        printf("\n3 : Accept Sparse Matrix!!!");
        printf("\n4 : Display Sparse Matrix!!!");
        printf("\n5 : Convert Matrix to Sparse Matrix!!!");
        printf("\n6 : Convert Sparse to Matrix!!!");
        printf("\n7 : Transpose Sparse!!!");
        printf("\n8 : Fast Transpose Sparse!!!");
        printf("\n9 : Exit!!!");
        printf("\n==========================\n");


        printf("\nEnter Your Choice : ");
        scanf("%d",&ch);

        switch(ch)
        {

            case 1:
                  printf("Enter no of rows & columns: ");
                  scanf("%d %d",&rows,&cols);
                  accept(mat,rows,cols);
                  printf("Matrix created successfully\n");

                 break;
            case 2:
                 if(rows==0||cols==0){
                 printf("Empty Matrix");
                }
                else{
                     display(mat,rows,cols);
                   }
           break;
            case 3:
                  printf("Enter no of rows: ");
                  scanf("%d",&smrows);
                  accept_sparse(smat,smrows);
                  printf("Matrix created successfully\n");

                 break;
            case 4:
                     display_sparse(smat);
                   
                   break;

            case 5:
                   mat_to_smat(mat,rows,cols,smat);
                   printf("Sparse Matix created");
                   break;

           case 6:
                   smat_to_mat(smat,mat);
                   rows=smat[0][0];
                   cols=smat[0][1];
                   printf("Matix created");
                   break;     

           case 7:
             printf("\n Display Sparse");
             display_sparse(smat);

               mat_trans(smat);
               printf("Success");

               printf("\n Display Transpose Sparse");
               display_sparse(smat);

               break;          


            case 8:
            printf("\n Display Sparse");
             display_sparse(smat);

               mat_trans(smat);
               printf("Success");

               printf("\n Display Transpose Sparse");
               display_sparse(smat);

               smat_trans_to_fast(smat);
               printf("Fast Success");

            //    printf("Display Fast");
            //    display_sparse(smat);
            //    break;

            case 9:
               exit(0);

               default:
                 printf("Enter proper chioce[1-9]");            
        }
}
return 0;
}

void accept(int mat[20][20],int rows,int cols){
    for(int i=0;i<rows;i++){
      for(int j=0;j<cols;j++){
        printf("Enter the data at [%d] [%d]",i,j);
        scanf("%d",&mat[i][j]);
      }
    }
}

void display(int mat[20][20],int rows,int cols){
    for(int i=0;i<rows;i++){
      for(int j=0;j<cols;j++){
        printf("%d\t",mat[i][j]);
      }
              printf("\n");

    }

}

void accept_sparse(int smat[20][3],int smrows){
    for(int i=0;i<smrows;i++){
      for(int j=0;j<3;j++){
        printf("Enter the data at [%d] [%d]",i,j);
        scanf("%d",&smat[i][j]);
      }
    }
}

void display_sparse(int smat[20][3]){
    int rows=smat[0][2];
    if(rows!=0){
        printf("\n");
    for(int i=0;i<=rows;i++){
      for(int j=0;j<3;j++){
        printf("%d\t",smat[i][j]);
      }
                  printf("\n");

    }

    }
    else 
    printf("\n Empty Matrix");
    }

void mat_to_smat(int mat[20][20],int r,int c,int smat[20][3]){
     int i,j,k=1;
     smat[0][0]=r;
     smat[0][1]=c;
     for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(mat[i][j]!=0){
                smat[k][0]=i;
                smat[k][1]=j;
                smat[k++][2]=mat[i][j];
            }
        }
     }
     smat[0][2]=k-1;
}

void smat_to_mat(int smat[20][3],int mat[20][20]){
     int i,j;
     for(i=0;i<smat;i++){
        for(j=0;j<smat;j++){
               mat[i][j]=0;
     }
}
for(i=1;i<=smat[0][2];i++){
    mat[smat[i][0]][smat[i][1]]=smat[i][2];
}
}

void mat_trans(int smat[20][3]){
    int temp;
    for(int i=0;i<smat[0][2];i++){
        temp=smat[i][0];
        smat[i][0]=smat[i][1];
        smat[i][1]=temp;
    }
}

void smat_trans_to_fast(int smat[20][3]){
    int temp,i,j;
    for(i=0;i<smat[0][2];i++){
        for(j=i+1;j<smat[0][2];j++){
            if(smat[i][0]>smat[j][0]|| smat[i][0]==smat[j][0]&& smat[i][1]>smat[j][1]){
                temp=smat[i][0];
                smat[i][0]=smat[j][0];
                smat[j][0]=temp;

                temp=smat[i][1];
                smat[i][1]=smat[j][1];
                smat[j][1]=temp;

                temp=smat[i][2];
                smat[i][2]=smat[j][2];
                smat[j][2]=temp;
            }
        }
    }
}