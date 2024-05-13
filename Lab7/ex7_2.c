#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

typedef struct Queue {
    Node *front;
    Node *rear;
    int count;
} Queue;

void initQueue(Queue *queue) {
    queue -> front = queue -> rear = NULL;
    queue -> count = 0;
}

int isEmpty(Queue *queue) {
    return queue -> count == 0;
}

void enqueue(Queue *queue, int data) {
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode -> data = data;
    newNode -> next = NULL;

    if (isEmpty(queue)) {
        queue -> front = newNode;
    }
    else {
        queue -> rear -> next = newNode;
    }

    queue -> rear = newNode;
    queue -> count++;
}

int dequeue (Queue *queue) {
    int data;
    Node *ptr;

    if (isEmpty(queue)) {
        printf(" \n");
        return 0;
    }

    ptr = queue -> front;
    data = ptr -> data;
    queue -> front = ptr -> next;
    free(ptr);
    queue -> count--;

    return data;
}

int main(void) {
    int arr[10] = {0};
    Queue queue;
    initQueue(&queue);
    
    int i;
    printf("Enter 10 integers: ");
    for (i = 0; i < 10; i++) {
        int j;
        int dup = 0;
        scanf("%d", &arr[i]);

        for (j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                dup = 1;
                break;
            }
        }

        if (!dup) {
            enqueue(&queue, arr[i]);
        }
    }

    printf("Array after removing duplicates: ");
    while (!isEmpty(&queue)) {
        printf("%d ", dequeue(&queue));
    }

    printf("\n");

    return 0;
}