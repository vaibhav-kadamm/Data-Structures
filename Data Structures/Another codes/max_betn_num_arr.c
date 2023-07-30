#include <stdio.h>

int getSum(int arr[],int n){
    int sum=0,i;
    for( i=0;i<n;i++){
         sum= sum + arr[i]*i;
    }
               return sum;


}
void changeArray(int arr[],int n){
    int i;
    int temp=arr[0];
    for(i=0;i<n-1;i++){
        arr[i]=arr[i+1];
        arr[n-1]=temp;
    }
}
int main(){
    int i, n,arr[100];
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int max_sum = getSum(arr,n);
    

    for(i=1;i<n;i++){
        changeArray(arr,n);
        int sum = getSum(arr,n);
        if(sum>max_sum){
         max_sum=sum;
        }
    }
        printf("%d",max_sum);     
            
    
}