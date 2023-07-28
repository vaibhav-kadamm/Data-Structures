#include <stdio.h>

void create(int[], int);
void display(int[], int);
int insert(int[], int, int, int);
int delete_per_pos(int[],int,int);
int linear_search(int[],int,int);
int Binary_search(int [],int ,int,int );
int Bubble_sort(int [],int);
int Selection_sort(int [],int);
void Insertion_sort(int[],int);
int getMax(int[],int);
int getMin(int[],int);
int remove_dup(int [],int n);



int main()
{
    int arr[100], n, ch, pos, value,index,max,min;
    while (1)
    {
        printf("\n=============================================");
        printf("\n 1.Create Array");
        printf("\n 2.Display Array");
        printf("\n 3.Insert Elements ");
        printf("\n 4.Delete Element ");
        printf("\n 5. LInear Search");
        printf("\n 6. Binary Search");
        printf("\n 7. Bubble Sort ");
        printf("\n 8. Selection sort");
        printf("\n 9. Insertion sort");
        printf("\n 10. Maximum element");
        printf("\n 11. Minimum element");
        printf("\n 12. Remove Duplicates");

        printf("\n================================================");
        printf("\n Enter the choice:");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("Enter the Elements:");
            scanf("%d", &n);
            create(arr, n);
            printf("Array Created Successfully");
            break;

        case 2:
            display(arr, n);
            break;
        case 3:
            printf("Enter the position & value:");
            scanf("%d %d", &pos,&value);
            n=insert(arr, n, pos,value);
            break;

        case 4:
            printf("Enter the position:");
            scanf("%d",&pos);
            n=delete_per_pos(arr,n,pos);
            break;

        case 5:
             printf("Enter the value:");
             scanf("%d",&value);    
             index=linear_search(arr,n,value);
            if(index!=-1)
               printf("%d element found at %d",value,index);
               else
               printf("%d element not found",value);
             break;


        case 6:
             printf("Enter the value:");
             scanf("%d",&value);
             index=Binary_search(arr,0,n-1,value);
            if(index!=-1)
            printf("%d element found at %d",value,index);
            else
               printf("%d element not found",value);
             break;

        case 7:
            Bubble_sort(arr,n);
             printf("Elements sorted successfully");
            break;
        case 8:
            Selection_sort(arr,n);
             printf("Elements sorted successfully");
            break;

        case 9:
               Insertion_sort(arr,n);
               printf("Elements sorted successfully");
               break;

        case 10:
             index=getMax(arr,n);
             printf("%d is maximum element & index is %d",n,arr[index]);       
             break;

        case 11:
             index=getMin(arr,n);
             printf("%d is minimum element",n,arr[index]);       
             break;

        case 12:
             n=remove_dup(arr,n);
             printf("duplicate removed");
             break;     

        return 0;
        }
    }
    }
void create(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("Enter element at[%d]", i);
        scanf("%d", &arr[i]);
    }
}
void display(int arr[], int n)
{
    int i;
    if (n == 0)
        printf("\n Empty Array");
    else
    {
        printf("\n");
        for (i = 0; i < n; i++)
        {
            printf("%d \t", arr[i]);
        }
    }
}
int insert(int arr[], int n, int pos, int value)
{
    int i;
    for (i = n; i >= pos; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = value;
    printf("Element inserted Successfully");
    return n + 1;
}
int delete_per_pos(int arr[],int n,int pos){
    int i; //4-1;3<4;
        //arr[3]=[4]
    for(i=pos-1;i<n-1;i++){
        arr[i]=arr[i+1];
        //printf("Element Deleted Successfully");
    }
return n-1;
}
int linear_search(int arr[],int n,int value){
      int i;
      for(i=0;i<n;i++){
        if(arr[i]==value)
        return i;
      }
        return -1;
      
}
int Binary_search(int arr[],int i,int j,int value){
int mid;
while(i<=j){
 mid=(i+j)/2;
 if(arr[mid]==value)
 return mid;
 if(arr[mid]<value)
 i=mid+1;
 if(arr[mid]>value)
 j= mid-1;
 
}
return -1;
}
int Bubble_sort(int arr[],int n){
int i,j;//cnt=0;
for(i=1;i<n;i++){
    for(int j=0;j<n-i;j++) //0<5-1=4 1<5-2=3  
    {
        //cnt++;
        if(arr[j]>arr[j+1]){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }

    }

}
}
int Selection_sort(int arr[],int n){
int i,j;//cnt=0;
for(i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++) //0<5-1=4 1<5-2=3  
    {
        //cnt++;
        if(arr[i]>arr[j]){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }

    }

}
}
void Insertion_sort(int arr[],int n){
    for(int i=1;i<n;i++){
            int temp=arr[i];
    for(int j=i-1;j>=0 && arr[j]>temp;j--){
           arr[j+1]=arr[j];
      arr[j+1]=temp;
    }
    }
}


int getMax(int arr[],int n){
    int i;int max=arr[0];int index=0;
    for(i=1;i<n;i++){
        if(arr[i]>max)
        max=arr[i];
        index=i;
    }
    return index;
}
int getMin(int arr[],int n){
    int i;int min=arr[0];int index=0;
    for(i=1;i<n;i++){
        if(arr[i]<min)
        min=arr[i];
        index =i;
    }
    return index;
}

int remove_dup(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;){
            if(arr[i]==arr[j])
            n=delete_per_pos(arr,n,j+1);
        
        else
        j++;
        }
    }
            return n;

}