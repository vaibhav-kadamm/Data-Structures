#include<stdio.h>

void accept(int[20][20],int ,int);
void display(int[20][20],int ,int);
void sum(int[20][20],int,int,int[20][20],int,int,int[20][20]);
int multiply(int[20][20],int,int,int[20][20],int,int,int[20][20]);
void each_row_max_min(int mat[20][20],int r,int c);
void non_sq_transpose(int mat[20][20],int ,int,int [20][20]);
void non_sq_transpose_self(int mat[20][20],int ,int);
void sq_transpose(int mat[20][20],int ,int,int [20][20]);
void sq_transpose_self(int mat[20][20],int ,int);
int count_non_zeros(int mat[20][20],int ,int );
int sum_of_diagonal(int mat[20][20],int r,int c);
int sum_of_Upper_diagonal(int mat[20][20],int r,int c);
int sum_of_Lower_diagonal(int mat[20][20],int r,int c);
int is_Symmetry(int mat[20][20],int rows,int cols);
void is_Saddle_point(int mat[20][20],int rows,int cols);



int main(){ 
    int ch,rows=0,cols=0;int mat[30][30],rows1,cols1,rows2,cols2,rows3,cols3,flag,trows,tcols,temp;
    int mat1[20][20],mat2[20][20],mat3[20][20],trans[20][20],cnt,sum;
    rows1=rows2;
    rows2=rows3;
    cols1=cols2;
    cols2=cols3;

    while(1){

   printf("\n=====================================\n");
   printf("\n  1. Accept Array");
   printf("\n  2.Display Array");
   printf("\n  3.Sum of 2D-Array");
   printf("\n  4.Multiplication of 2D-Array");
   printf("\n  5.Max & Min in 2D-Array");
   printf("\n  6.Non-Square Transpose Matrix");
   printf("\n  7.Non-Square Self Transpose Matrix");
   printf("\n  8.Square Transpose Matrix");
   printf("\n  9.Square Self Transpose Matrix");
   printf("\n  10.Non Zeros in matrix");
   printf("\n  11.Sum of Diagonal");
   printf("\n  12.Sum of Upper Diagonal");
   printf("\n  13.Sum of Lower Diagonal");
   printf("\n  14.Is Symmetry");
   printf("\n  15.Saddle Point");
   printf("\n  16.Exit");



   printf("\n====================================\n");
   printf("Enter Your Choice:");
   scanf("%d",&ch);

   switch(ch){

    case 1:
       printf("Enter rows and columns: ");
       scanf("%d %d",&rows,&cols);
        printf("Enter 2D-Array elements:");
       accept(mat,rows,cols);
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
       printf("\n Enter the Matrix-1 Rows And columns: ");
       scanf("%d %d",&rows1,&cols1);
       accept(mat1,rows1,cols1);

       printf("\n Enter the Matrix-2 Rows And columns: ");
       scanf("%d %d",&rows2,&cols2);
       accept(mat2,rows2,cols2);

       flag=sum_mat(mat1,rows1,cols1,mat2,rows2,cols2,mat3);
       if(flag){
       printf("\n Sum of 2D is success");
       rows3=rows1;
       cols3=cols2;

       printf("\n Matrix-1\n");
       display(mat1,rows1,cols1);

       printf("\n Matrix-2\n");
       display(mat2,rows2,cols2);

       printf("\n Matrix-3= Matrix1 * Matrix2 \n");
       display(mat3,rows3,cols3);
       }
       else
              printf("\n Sum of 2D is failed");

       break;

       case 4: 
       printf("\n Enter the Matrix-1 Rows And columns: ");
       scanf("%d %d",&rows1,&cols1);
       accept(mat1,rows1,cols1);

       printf("\n Enter the Matrix-2 Rows And columns: ");
       scanf("%d %d",&rows2,&cols2);
       accept(mat2,rows2,cols2);

       flag = multiply(mat1,rows1,cols1,mat2,rows2,cols2,mat3);
       if(flag){
       printf("\n Multiplication of 2D is success");
       rows3=rows1;
       cols3=cols1;

       printf("\n Matrix-1\n");
       display(mat1,rows1,cols1);

       printf("\n Matrix-2\n");
       display(mat2,rows2,cols2);

       printf("\n Matrix-3= Matrix1+Matrix2 \n");
       display(mat3,rows3,cols3);
       }
       else
              printf("\n Multiplication of 2D is failed");

       break;

       case 5:
       each_row_max_min(mat,rows,cols);
       break;

       case 6:
       non_sq_transpose(mat,rows,cols,trans);
       trows=cols;
       tcols=rows;
       printf("\n Transpose Success");

       printf("\n Normal Matrix\n");
       display(mat,rows,cols);

       printf("\n Transpose Matrix\n");
       display(trans,trows,tcols);
      
      break;

      case 7:

      printf("\n Normal Matrix\n");
       display(mat,rows,cols);

       non_sq_transpose_self(mat,rows,cols);
       temp=rows;
       rows=cols;
       cols=temp;

       printf("\n Transpose Matrix\n");
       display(mat,rows,cols);
      
      break;

      case 8:
       sq_transpose(mat,rows,cols,trans);
       trows=cols;
       tcols=rows;
       printf("\n Transpose Success");

       printf("\n Normal Matrix\n");
       display(mat,rows,cols);

       printf("\n Transpose Matrix\n");
       display(trans,trows,tcols);
      
      break;

      case 9:

      printf("\n Normal Matrix\n");
       display(mat,rows,cols);

       sq_transpose_self(mat,rows,cols);
        
       printf("\n Transpose Matrix\n");
       display(mat,rows,cols);
      
      break;
      
      case 10:
         cnt=count_non_zeros(mat,rows,cols);
         printf("\n No.of Non Zeros are:%d",cnt);
         break;

      case 11:
           sum=sum_of_diagonal(mat,rows,cols);
           printf("\n Sum of diagonal is: %d",sum);
           break;

     case 12:
           sum=sum_of_Upper_diagonal(mat,rows,cols);
           printf("\n Sum of diagonal is: %d",sum);
           break; 

     case 13:
           sum=sum_of_Lower_diagonal(mat,rows,cols);
           printf("\n Sum of diagonal is: %d",sum);
           break;   

     case 14:
           if(is_Symmetry(mat,rows,cols))
           printf("\n Matrix is Symmetric");
           else
           printf("\n Matrix is Not Symmetric");
           break; 
      case 15:
           is_Saddle_point(mat,rows,cols);
           break;

      case 16:
           exit(0);

        default:
        printf("\n Enter proper choice[1-16]");                             
    }
    }
}
void accept(int mat[20][20],int rows,int cols){
      for(int i=0;i<rows;i++){

        for(int j=0;j<cols;j++){
          printf("Enter Data at [%d] [%d]:",i,j);
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

int sum_mat(int mat1[20][20],int rows1,int cols1,int mat2[20][20],int rows2,int cols2,int mat3[20][20]){
  int i,j;
  if(rows1==rows2 && cols1==cols2)
  {
      for(i=0;i<rows1;i++){
        for(j=0;j<cols1;j++){
          mat3[i][j]=mat1[i][j] + mat2[i][j];
        }
      }
      return 1;
  }
  else
  return 0;
}
int  multiply(int mat1[20][20],int rows1,int cols1,int mat2[20][20],int rows2,int cols2,int mat3[20][20]){

if(cols1==rows2){

  int i,j,k;
  for(i=0;i<rows1;i++){
    for(j=0;j<cols2;j++){
      mat3[i][j]=0;
      for(k=0;k<rows2;k++)

      mat3[i][j]=mat3[i][j]+mat1[i][k]*mat2[k][j];
    }
  }
  return 1;
}
else
    return 0;
}

void each_row_max_min(int mat[20][20],int r,int c){
  int i,j;
  for(i=0;i<r;i++){
    int max=mat[i][0];
    int min=mat[i][0];
    printf("\nRow %d :[%d",i+1,mat[i][0]);
    for(j=1;j<c;j++){
       if(mat[i][j]>max)
       max=mat[i][j];
       if(mat[i][j]<min)
       min=mat[i][j];
       printf(", %d",mat[i][j]);
    }
    printf("] Max= %d,Min= %d ",max,min);
  }
}

  void non_sq_transpose(int mat[20][20],int rows,int cols,int trans[20][20]){

      int i,j;
      for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
          trans[j][i]=mat[i][j];
        }
      }
  }

  void non_sq_transpose_self(int mat[20][20],int rows,int cols){

      int i,j;
      int trans[20][20];
      non_sq_transpose(mat,rows,cols,trans);
      for(i=0;i<cols;i++){
        for(j=0;j<rows;j++){
          mat[i][j]=trans[i][j];
        }
      }
  }

void sq_transpose(int mat[20][20],int rows,int cols,int trans[20][20]){
  non_sq_transpose(mat, rows, cols, trans);

  }

  void sq_transpose_self(int mat[20][20],int rows,int cols){

      int i,j;                            // 1 2 3
      for(i=0;i<rows-1;i++){              // 2 4 5
        for(j=i+1;j<cols;j++){            // 3 5 6

          int temp=mat[i][j];
          mat[i][j]=mat[j][i];
          mat[j][i]= temp;
        }
      }
  }
  int count_non_zeros(int mat[20][20],int r,int c){
   int i,j,cnt;
   for(i=0;i<r;i++){
    for(j=0;j<c;j++){
      if(mat[i][j]!=0)
      cnt++;
    }
   }
   return cnt;
  }

  int sum_of_diagonal(int mat[20][20],int r,int c){
    int i,sum=0;
    for(i=0;i<r;i++){
      sum+=mat[i][i];

    }
    return sum;
  }

  int sum_of_Upper_diagonal(int mat[20][20],int rows,int cols){

      int i,j,sum=0;
      for(i=0;i<rows-1;i++){
        for(j=i+1;j<cols;j++){
          sum+=mat[i][j];
        }
      }
      return sum;
  }

  int sum_of_Lower_diagonal(int mat[20][20],int rows,int cols){

      int i,j,sum=0;
      for(i=0;i<rows-1;i++){
        for(j=i+1;j<cols;j++){
          sum+=mat[j][i];
        }
      }
      return sum;
  }

  int is_Symmetry(int mat[20][20],int rows,int cols){

      int i,j,sum=0;
      for(i=0;i<rows-1;i++){
        for(j=i+1;j<cols;j++){
          if(mat[i][j]!=mat[j][i]);
          return 0;
        }
      }
      return 1;
  }
  void is_Saddle_point(int mat[20][20],int r,int c){
    int i,j,flag=0;
    for(i=0;i<r;i++){
      int min=mat[i][0];
      int minc=0;
      for(j=1;j<c;j++){
        if(mat[i][j]<min){
          min=mat[i][j];
          minc=j;
        }
      }
      int max=mat[0][minc];
      for(j=1;j<r;j++){
        if(mat[j][minc]>max)
        max=mat[j][minc];
      }
      if(min==max){
      printf("\n Saddle point is %d",max);
      flag=1;
      }
      
    }
    if(!flag)
    printf("Saddle point not found");
    
  }