#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

#define MAX 5

typedef struct queue {
    int data[MAX];
    int F, R;
} Queue;

void init(Queue*);
int is_empty(Queue*);
int is_full(Queue*);
int insert(Queue*, int);
void delete(Queue*);
void display(Queue);

int main() {
    Queue q;
    int ch, x;

    init(&q);

    while (1) {
        printf("\n=================================\n");
        printf("1 : Insert Element in Queue.\n");
        printf("2 : Delete Element From Queue.\n");
        printf("3 : Check Empty Queue.\n");
        printf("4 : Check Full Queue.\n");
        printf("5 : Display Queue.\n");
        printf("6 : Exit.\n");
        printf("=================================\n");

        printf("Enter Your Choice : ");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                printf("Enter Element : ");
                scanf("%d", &x);
                insert(&q, x);
                break;
            case 2:
                delete(&q);
                break;
            case 3:
                if (is_empty(&q))
                    printf("Queue is Empty.\n");
                else
                    printf("Queue is Not Empty.\n");
                break;
            case 4:
                if (is_full(&q))
                    printf("Queue is Full.\n");
                else
                    printf("Queue is Not Full.\n");
                break;
            case 5:
                display(q);
                break;
            case 6:
                exit(0);
            default:
                printf("Select Proper Choice [1-6]\n");
        }
    }
}

void init(Queue* q) {
    q->F = -1;
    q->R = -1;
}

int is_empty(Queue* q) {
    return (q->F == -1);
}

int is_full(Queue* q) {
    return ((q->R + 1) % MAX == q->F);
}

int insert(Queue* q, int x) {
    if (is_full(q)) {
        printf("Queue is Full\n");
    } else {
        if (is_empty(q)) {
            q->F = q->R = 0;
        } else {
            q->R = (q->R + 1) % MAX;
        }
        q->data[q->R] = x;
        printf("%d is inserted in queue\n", q->data[q->R]);
    }
}

void delete(Queue* q) {
    if (is_empty(q)) {
        printf("Empty Queue\n");
    } else {
        int x = q->data[q->F];
        if (q->F == q->R) {
            init(q);
        } else {
            q->F = (q->F + 1) % MAX;
        }
        printf("%d is deleted Successfully\n", x);
    }
}

void display(Queue q) {
    int i;
    if (is_empty(&q)) {
        printf("Empty Queue\n");
    } else {
        printf("\n");
        i = q.F;
        do {
            printf("%d \t", q.data[i]);
            i = (i + 1) % MAX;
        } while (i != (q.R + 1) % MAX); 
        printf("\n");
    }
}
