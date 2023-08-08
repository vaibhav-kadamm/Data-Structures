#include <stdio.h>
#include <stdlib.h>
                     //Singly Linked List//
typedef struct node {
    int data;
    struct node *next;
} Node;

Node *create();
void display(Node *p);
Node *insert_fn(Node *head, int x);
Node *insert_ln(Node *head, int x);
Node *insert_bn(Node *head, int x, int pos);
Node *delete_fn(Node *head);
Node *delete_ln(Node *head);
Node *delete_bn(Node *head, int pos);
int countNode(Node *p);
Node *removeDup(Node *head);
Node *sort(Node *head);
Node *reverse(Node *head);
Node *union_t1(Node *head1,Node *head2);
Node *union_t2_sort(Node *head1,Node *head2);
Node *union_t3_removeDup(Node *head1,Node *head2);
int search(Node *head ,int data);
Node *intersection(Node *head1,Node *head2);
Node *difference(Node*,Node*);
Node *skip(Node *head);
Node *update(Node*,int , int);
Node *addition(Node* head1,Node* head2);

Node *CN();

int main() {
    Node *HEAD = NULL,*HEAD1,*HEAD2,*HEAD3;
    int ch;
    int x, pos, cnt = 0,old_data,new_data;

    while (1) {
        printf("\n--------------\n");
        printf("1. Create LL\n");
        printf("2. Display LL\n");
        printf("3. Insert FN LL\n");
        printf("4. Insert LN\n");
        printf("5. Insert BN\n");
        printf("6. Count Node\n");
        printf("7. Delete FN\n");
        printf("8. Delete LN\n");
        printf("9. Delete BN\n");
        printf("10.Remove Duplicates\n");
        printf("11.Sort LL\n");
        printf("12.Reverse LL\n");
        printf("13.Union T1  LL\n");
        printf("14.Union T2 Sort LL\n");
        printf("15.Union T3 Remove Duplicates LL\n");
        printf("16.Search in LL\n"); 
        printf("17.Intersection in LL\n"); 
        printf("18.Difference between L1-L2 in LL\n");
        printf("19.Difference between L2-L1 in LL\n");
        printf("20.Skip/Alternate LL\n");
        printf("21.Update LL\n");
        printf("22.Addition of LL\n");
        printf("23. Exit\n");
        printf("----------------\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                HEAD = create();
                printf("LL created Successfully\n");
                break;

            case 2:
                display(HEAD);
                break;

            case 3:
                printf("Enter the Data:");
                scanf("%d", &x);
                HEAD = insert_fn(HEAD, x);
                printf("Insertion Successful\n");
                break;

            case 4:
                printf("Enter the Data:");
                scanf("%d", &x);
                HEAD = insert_ln(HEAD, x);
                printf("Insertion Successful\n");
                break;

            case 5:
                printf("Enter the Data & Position:");
                scanf("%d %d", &x, &pos);
                HEAD = insert_bn(HEAD, x, pos);
                printf("Insertion Successful\n");
                break;

            case 6:
                cnt = countNode(HEAD);
                printf("Count is: %d\n", cnt);
                break;

            case 7:
                HEAD = delete_fn(HEAD);
                printf("Deletion Successful\n");
                break;

            case 8:
                HEAD = delete_ln(HEAD);
                printf("Deletion Successful\n");
                break;

            case 9:
                printf("Enter the Position:");
                scanf("%d", &pos);
                HEAD = delete_bn(HEAD, pos);
                printf("Deletion Successful\n");
                break;

            case 10:
                 HEAD=removeDup(HEAD);
                 printf("Duplicates Removed Successfully\n");   
                 break; 

            case 11:
                 HEAD=sort(HEAD);
                 printf(" Sorted Successfully\n");   
                 break;
            case 12:
                 HEAD=reverse(HEAD);
                 printf(" Reversed Successfully\n");   
                 break;

            case 13:
                   HEAD1=create();
                   printf("HEAD1 Created Successfully\n");

                   HEAD2=create();
                   printf("HEAD2 Created Successfully\n");

                   HEAD3=union_t1(HEAD1,HEAD2);
                   printf("Union Success\n");

                   printf("HEAD1\n");
                   display(HEAD1);

                   printf("HEAD2\n");
                   display(HEAD2);

                   printf("UNION \n");
                   display(HEAD3);

            break;

            case 14:
                   HEAD1=create();
                   printf("HEAD1 Created Successfully\n");

                   HEAD2=create();
                   printf("HEAD2 Created Successfully\n");

                   HEAD3=union_t2_sort(HEAD1,HEAD2);
                   printf("Union Success\n");

                   printf("HEAD1\n");
                   display(HEAD1);

                   printf("HEAD2\n");
                   display(HEAD2);

                   printf("UNION \n");
                   display(HEAD3);

            break;

            case 15:
                   HEAD1=create();
                   printf("HEAD1 Created Successfully\n");

                   HEAD2=create();
                   printf("HEAD2 Created Successfully\n");

                   HEAD3=union_t3_removeDup(HEAD1,HEAD2);
                   printf("Union Success\n");

                   printf("HEAD1\n");
                   display(HEAD1);

                   printf("HEAD2\n");
                   display(HEAD2);

                   printf("UNION \n");
                   display(HEAD3);

            break;

            case 16:
                 printf("Enter the Data:");
                scanf("%d", &x);
                HEAD = search(HEAD, x);
                printf(" Element Found Successfully\n");
                break;
            
            case 17:
                   HEAD1=create();
                   printf("HEAD1 Created Successfully\n");

                   HEAD2=create();
                   printf("HEAD2 Created Successfully\n");

                   HEAD3=intersection(HEAD1,HEAD2);
                   printf("INTERSECTION Success\n");

                   printf("HEAD1\n");
                   display(HEAD1);

                   printf("HEAD2\n");
                   display(HEAD2);

                   printf("INTERSECTION \n");
                   display(HEAD3);

            break;
            case 18:
                   HEAD1=create();
                   printf("HEAD1 Created Successfully\n");

                   HEAD2=create();
                   printf("HEAD2 Created Successfully\n");

                   HEAD3=difference(HEAD1,HEAD2);
                   printf("Difference Success\n");

                   printf("HEAD1\n");
                   display(HEAD1);

                   printf("HEAD2\n");
                   display(HEAD2);

                   printf("Difference \n");
                   display(HEAD3);

            break;
            case 19:
                   HEAD1=create();
                   printf("HEAD1 Created Successfully\n");

                   HEAD2=create();
                   printf("HEAD2 Created Successfully\n");

                   HEAD3=difference(HEAD2,HEAD1);
                   printf("Difference Success\n");

                   printf("HEAD1\n");
                   display(HEAD1);

                   printf("HEAD2\n");
                   display(HEAD2);

                   printf("Difference \n");
                   display(HEAD3);

            break;
           
            case 20:
                   HEAD=skip(HEAD);
                   printf("Skip Success");
                   break;

            case 21:
                  printf("Enter Old Data & New Data:\n");
                  scanf("%d %d",&old_data,&new_data);
                  printf("Updated Successfully\n");
                  HEAD=update(HEAD,old_data,new_data);
                  break;  
                  
            case 22:
                   HEAD1=create();
                   printf("HEAD1 Created Successfully\n");

                   HEAD2=create();
                   printf("HEAD2 Created Successfully\n");

                   HEAD3=addition(HEAD1,HEAD2);
                   printf("ADDITION Success\n");

                   printf("HEAD1\n");
                   display(HEAD1);

                   printf("HEAD2\n");
                   display(HEAD2);

                   printf("ADDITION \n");
                   display(HEAD3);

            break;           
            case 23:
                printf("Exiting...\n");
                exit(0);

            default:
                printf("Invalid choice, please try again.\n");
        }
    }
}

Node *create() {
    int n, i = 1, value;
    printf("Enter the number of elements you want: ");
    scanf("%d", &n);

    Node *head = NULL, *p, *q;

    while (i <= n) {
        q = (Node *)malloc(sizeof(Node));
        if (q == NULL) {
            printf("Memory allocation failed.\n");
            exit(1);
        }

        printf("Enter the Data: ");
        scanf("%d", &value);

        q->data = value;
        q->next = NULL;

        if (head == NULL) {
            head = q;
            p = head;
        } else {
            p->next = q;
            p = p->next;
        }

        i++;
    }
    return head;
}

void display(Node *p) {
    printf("\n");
    while (p != NULL) {
        printf("%d\t", p->data);
        p = p->next;
    }
    printf("\n");
}

Node *insert_fn(Node *head, int x) {
    Node *p = CN();
    p->data = x;
    p->next = head;
    head = p;
    return head;
}

Node *insert_ln(Node *head, int x) {
    Node *p = CN();
    p->data = x;
    p->next = NULL;

    if (head == NULL) {
        head = p;
    } else {
        Node *q = head;
        while (q->next != NULL) {
            q = q->next;
        }
        q->next = p;
    }
    return head;
}

Node *insert_bn(Node *head, int x, int pos) {
    if (pos == 1 || head == NULL) {
        head = insert_fn(head, x);
    } else if (countNode(head) + 1 == pos) {
        head = insert_ln(head, x);
    } else {
        Node *p = head, *q;
        int i = 1;
        while (i++ < pos - 1) {
            p = p->next;
        }
        q = CN();
        q->data = x;
        q->next = p->next;
        p->next = q;
    }
    return head;
}

int countNode(Node *p) {
    int cnt = 0;
    while (p != NULL) {
        p = p->next;
        cnt++;
    }
    return cnt;
}

Node *delete_fn(Node *head) {
    if (head == NULL)
        return head;
    Node *p = head;
    head = head->next;
    free(p);
    return head;
}

Node *delete_ln(Node *head) {
    if (head == NULL)
        return head;
    if (head->next == NULL) {
        free(head);
        return NULL;
    }
    Node *p = head;
    while (p->next->next != NULL) {
        p = p->next;
    }
    free(p->next);
    p->next = NULL;
    return head;
}

Node *delete_bn(Node *head, int pos) {
    if (head == NULL) {
        return head;
    }
    if (pos == 1) {
        head = delete_fn(head);
    } else if (countNode(head) == pos) {
        head = delete_ln(head);
    } else {
        Node *p = head, *q;
        int i = 1;
        while (i++ < pos - 1) {
            p = p->next;
        }
        q = p->next;
        p->next = q->next;
        free(q);
    }
    return head;
}

Node *removeDup(Node *head) {
    if (head == NULL || head->next == NULL)
        return head;

    Node *p = head;
    while (p != NULL) {
        Node *q = p;
        while (q->next != NULL) {
            if (p->data == q->next->data) {
                Node *r = q->next;
                q->next = q->next->next;
                free(r);
            } else {
                q = q->next;
            }
        }
        p = p->next;
    }
    return head;
}

Node *sort(Node *head){

    Node *p=head;
    while(p->next!=NULL){
      Node *q=p->next;
    
    while(q!=NULL){
        if(p->data > q->data){
            int temp=p->data;
            p->data=q->data;
            q->data=temp;
        }
        q=q->next;
    }
    p=p->next;
    }
    return head;
}

Node *reverse(Node *head){
    Node *p=head,*revhead,*q;
    while(p->next!=NULL)
         p=p->next;
    
    q=revhead=p;
    p=head;
    while(p->next!=q){
        while (p->next!=q)
        
            p=p->next;
         q->next=p;
         q=p;
         p=head; 
    }
    q->next=p;
    p->next=NULL;
    return revhead;
}

Node *union_t1(Node *head1,Node *head2){
         Node *head3=NULL,*p3,*q3;

         while (head1!=NULL)
         {
            if(head3==NULL){
                head3=CN();
                head3->data=head1->data;
                head3->next=NULL;

                p3=head3;
            }
            else{
                q3=CN();
                q3->data=head1->data;
                q3->next=NULL;
                p3->next=q3;
                p3=p3->next;
            }
            head1=head1->next;
         }

         while (head2!=NULL)
         {
            if(head3==NULL){
                head3=CN();
                head3->data=head2->data;
                head3->next=NULL;

                p3=head3;
            }
            else{
                q3=CN();
                q3->data=head2->data;
                q3->next=NULL;
                p3->next=q3;
                p3=p3->next;
            }
            head2=head2->next;
         }
         return head3;
}
Node *union_t2_sort(Node *head1,Node *head2){

    Node *head3=union_t1(head1,head2);
    head3=sort(head3);
    return head3;
}

Node *union_t3_removeDup(Node *head1,Node *head2){
     Node *head3=union_t1(head1,head2);
     head3=removeDup(head3);
    head3=sort(head3);
    return head3;
}

int search(Node *head ,int data){
    while(head!=NULL){
        if(head->data==data){
            return 1;
        }
        else{
            head=head->next;
        }
    }
    return 0;
}

Node *intersection(Node *head1,Node *head2){
  
  Node *head3=NULL,*p3,*q3;
   while(head1!=NULL){

    if(search(head2,head1->data) && (!search(head3,head1->data))){
        if(head3 == NULL){
            head3=CN();
            head3->data=head2->data;
            head3->next=NULL;
            p3=head3;
        }
        else{
            q3=CN();
            q3->data=head1->data;
            q3->next=NULL;
            p3->next=q3;
            p3=p3->next;
        }
    }
    head1=head1->next;

   }
   return head3;
}

Node *difference(Node *head1, Node *head2) {
    Node *head11 = NULL, *head22 = NULL, *p, *q;

    while (head1 != NULL) {
        q = CN();
        q->data = head1->data;
        q->next = NULL;
        if (head11 == NULL) {
            head11 = q;
            p = head11;
        } else {
            p->next = q;
            p = p->next;
        }
        head1 = head1->next;
    }

 
    while (head2 != NULL) {
        q = CN();
        q->data = head2->data;
        q->next = NULL;
        if (head22 == NULL) {
            head22 = q;
            p = head22;
        } else {
            p->next = q;
            p = p->next;
        }
        head2 = head2->next;
    }

    p = head11;

   
    while (p != NULL) {
        int data = p->data;
        int pos2 = search(head22, data);
        if (pos2) {
            int pos1 = search(head11, data);
            head11 = delete_bn(head11, pos1);
            p = head11;
            head22 = delete_bn(head22, data);
        } else {
            p = p->next;
        }
    }
    return head11;
}
Node *skip(Node *head){
    Node *p,*q;
    if(head==NULL || head->next==NULL){
        return head;
    }
    else if(head->next->next==NULL){
          head=delete_ln(head);
          return head;
    }
    p=head;
    while(p->next!=NULL){
        q=p->next;
        p->next=q->next;
        free(q);
        p=p->next;
        if(p==NULL)
        break;
    }
    return head;
}

Node *update(Node *head,int old_data, int new_data){

     Node *p=head;
     while(p!=NULL){
        if(p->data==old_data){
            p->data=new_data;
            return head;
        }
        p=p->next;
     }
     return head;

}
Node *addition(Node *head1,Node *head2)
{
    Node *p1=head1, *q1= head2;
    while(p1->next!=NULL)
        p1=p1->next;

    while(q1->next!=NULL)
        q1=q1->next;

    Node *head3=NULL;
    int carry = 0,x,sum ;

    while (p1!=head1 && q1!=head2)
    {
        sum=p1->data + q1->data + carry;
        x = sum%10;
        carry = sum/10;
        head3 = insert_fn(head3,x);

        Node *r=head1;
        while(r->next!=p1)
            r=r->next;

        p1 = r;

        r=head2;
        while(r->next!=q1)
            r=r->next;

        q1 = r;


    }


    sum =p1->data + q1->data + carry;
    x = sum%10;
    carry = sum/10;
    head3 = insert_fn(head3,x);
    head3 = insert_fn(head3,carry);

    return head3;
}

Node *CN() {
    return (Node *)malloc(sizeof(Node));
}
