#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

void  main()
{
	char exp[30],stack[30];
	printf("\nEnter Expression : ");
	gets(exp);
	

	if(exp[0]==']' || exp[0]==')' || exp[0]=='}')
    {
        printf("False");
       
    }
    int i , j =0 ;
    int flag=1;
    
    for(i=0;exp[i]!='\0';i++)
    {
        if(exp[i]=='[' || exp[i]=='(' || exp[i]=='{')
            stack[j++] = exp[i];

        else if(exp[i]==')')
        {
            if(j!=0)
            {
                char temp = stack[j-1];
                if(temp != '(')
                {
                    flag=0;
                    break;
                }
                else
                    j-=1;
            }
        }
        else if(exp[i]==']')
        {
            if(j!=0)
            {
                char temp = stack[j-1];;
                if(temp != '[')
                {
                    flag=0;
                    break;
                }
                else
                    j-=1;
            }
        }
        else if(exp[i]=='}')
        {
            if(j!=0)
            {
                char temp = stack[j-1];
                if(temp != '{')
                {
                    flag=0;
                    break;
                }
                else
                    j-=1;
            }
        }

    }

    if(flag && j==0)
        printf("True");
    else
        printf("False");

}


