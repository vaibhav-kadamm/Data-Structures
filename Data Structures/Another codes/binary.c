/* binary of 11
    1011
*/
 
 #include <stdio.h>
 
 int main(){
    int sum=0,temp, n,r,bin=0;
    scanf("%d",&n);
    temp=n;
    while(temp>0){
        r=temp%2;
        sum=sum*10+r;
        temp/=2;
    }
   while(sum>0){
    r=sum%10;
    bin=bin*10+r;
    sum/=10;
}
printf("%d",bin);
    return 0;
 }