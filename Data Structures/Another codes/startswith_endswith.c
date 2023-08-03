#include <stdio.h>
#include<string.h>
#include<stdlib.h>

/* string contains "1" "4" "78"
  print- +
  string endswith "35"
  print-  -
  string starts with "190"
  print- *
  string startswith "1" and ends with "4"
  print- !
  else
  print- ?

*/
int main(){
    char str[100];
    scanf("%s",str);
    if(strcmp(str,"1" )==0 || strcmp(str,"4")==0 || strcmp(str,"78")==0)
        printf("+");
    
    else if(strcmp(str+(strlen(str)-2) ,"35")==0)
        printf("-");
    
    else if(str[0]=='1' && str[1]=='9' && str[2]=='0')
        printf("*");
    
    else if(str[0]=='1' && (strcmp(str+(strlen(str)-1),"4"))==0)
        printf("!");
    
    else
        printf("?");
    
        return 0;
}