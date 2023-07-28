#include<stdio.h>
void accept(int[]);
void display(int[]);
int evaluate(int[],int);
void add(int[],int[],int[]);
void multiply(int[],int[],int[]);
void update(int poly[],int terms,int coeff,int power);
void delete(int poly[],int terms);


int main(){
int ch,poly[101],x,sum,poly1[101],poly2[101],poly3[201],terms,coeff,power;

while(1){
        
        printf("\n=========================\n");
        printf("\n1 : Accept Polynomial");
        printf("\n2 : Display Polynomial");
        printf("\n3 : Evaluate Polynomial");
        printf("\n4 : Addition Of 2 Polynomial");
        printf("\n5 : Multiplication Of 2 Polynomial");
        printf("\n6 : Update Polynomial");
        printf("\n7 : Delete Polynomial");
        printf("\n8 : Exit");

        printf("\n=========================\n");


        printf("\nEnter Your Choice : ");
        scanf("%d",&ch);

   

switch (ch)
{
case 1:
    accept(poly);
    printf("Entered terms successfully");
    break;
case 2:
     display(poly);    
     break;

case 3:
    printf("\n Enter X:");
    scanf("%d",&x);
    sum=evaluate(poly,x);     
    printf("\n Evaluate value is %d:",sum);
    break;

case 4:
     accept(poly1);
     accept(poly2);   

      add(poly1,poly2,poly3);

     printf("\nPolynomial1: ");
     display(poly1); 

     printf("\nPolynomial2: ");
     display(poly2); 

     printf("\n Polynomial1+Polynomial2=Polynomial3\n");
     display(poly3);
     break;

     case 5:
     accept(poly1);
     accept(poly2);   

      multiply(poly1,poly2,poly3);

     printf("\nPolynomial1: ");
     display(poly1); 

     printf("\nPolynomial2: ");
     display(poly2); 

     printf("\n Polynomial1+Polynomial2=Polynomial3\n");
     display(poly3);
     break;
     case 6:
        printf("\nEnter Term , Coefficient & Power : ");
        scanf("%d %d %d",&terms,&coeff,&power);
        update(poly,terms,coeff,power);
        break;

    case 7:
        printf("\nEnter Term : ");
        scanf("%d",&terms);
        delete(poly,terms);
        break;

            case 8:
                exit(0);

            default:
                printf("\nPlease Select Proper Choice[1-8]!!!");


}
}
return 0;

}
void accept(int poly[]){
    int i,terms,coeff,power;
    printf("\n Enter no.of terms:");
    scanf("%d",&terms);
    poly[0]=terms;
    for(i=1;i<terms*2;){
        printf("Enter the coeff,power: ");
        scanf("%d %d",&coeff,&power);
        poly[i++]=coeff;
        poly[i++]=power;
    }
}
void display(int poly[]){
int i;
if(!poly[0]){
    printf("\n Empty Array");
}
else{
    for(i=2;i<poly[0];i+=2){
        printf("%dX%d ",poly[i],poly[i-1]);
    }
        printf("%dX%d.",poly[i],poly[i-1]);
}
}
int evaluate(int poly[],int x){
    int i,j,sum=0;
    for(i=2;i<poly[0]*2;i+=2){
        sum=sum+poly[i]*(pow(x,poly[i-1]));
            return sum;

    }
}

void add(int poly1[],int poly2[],int poly3[]){
     
     int i,j,k=1;
     for(i=1;i<=poly1[0]*2;){
        for(j=1;j<=poly2[0]*2;){

            if(poly1[i]>poly2[j]){
                poly3[k++]=poly1[i++];
                poly3[k++]=poly1[i++];
            }
            else if(poly1[i]<poly2[j]){
                poly3[k++]=poly1[j++];
                poly3[k++]=poly1[j++];
            }
            else{
                poly3[k++]=poly1[i++];
                j++;

                poly3[k++]=poly1[i++]+poly2[j++];

            }
    }        

            while(i<=poly1[0]*2){
                poly3[k++]=poly1[i++];
            }
            while(i<=poly2[0]*2){
                poly3[k++]=poly2[j++];
            }
            poly3[0]=k/2;
       
}
}

void multiply(int poly1[],int poly2[],int poly3[]){

printf("Entered");
    int i,j,k;
    int poly4[201],poly5[301];

    for(j=1;j<=poly2[0]*2;j+=2){
        poly4[0]=0;
        k=1;
    
    for(i=1;i<=poly1[0]*2;){
        poly4[k++]=poly1[i++]+poly2[j];
        poly4[k++]=poly1[i++]*poly2[j+1];
    }
    
    poly4[0]=k/2;
    add(poly4,poly3,poly5);
    for(i=1;i<=poly5[0]*2;i++){
        poly3[i]=poly5[i];
    }
    }
}

void update(int poly[],int terms,int coeff,int power){
    
    int i=terms*2-1;
    poly[i]=power;
    poly[i+1]=coeff;
}

void delete(int poly[],int terms){

    int i;
    for(i=terms*2-1;i<=poly[0]*2-2;i++)
    {
        poly[i]=poly[i+2];
        i++;
        poly[i]=poly[i+2];
    }
    poly[0] -=1;
}

