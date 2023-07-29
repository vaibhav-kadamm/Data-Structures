#include <stdio.h>

int main(){
    int num = 54312;
    int sum = 0;
    while(num > 0){
        int n = num % 10;
        
            sum = sum + n;
        
        num /= 10; 
    }
    printf("%d", sum);
    return 0;
}
