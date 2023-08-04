#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct book{
 char name[50];
 int nop;
 float price;

}Book;
int main(){
    Book b1;
    Book b2;
    
    strcpy(b1.name,"CPP");
    b1.nop=3;
    b1.price=243.5;
    strcpy(b2.name,"JAVA");
    b2.nop=3;
    b2.price=258.5;

     printf("%s %d %f \n",b1.name,b1.nop,b1.price);
     printf("%s %d %f \n",b2.name,b2.nop,b2.price);
}