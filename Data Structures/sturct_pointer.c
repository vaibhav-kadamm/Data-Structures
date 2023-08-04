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
    
    strcpy(b1.name,"CPP");
    b1.nop=3;
    b1.price=243.5;
    

    Book *ptr;
    ptr=&b1;
     
     printf("%s %d %f \n",ptr->name,ptr->nop,ptr->price);
    // printf("%s %d %f \n",b1.name,b1.nop,b1.price);
}