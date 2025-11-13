#include <stdio.h>
#include <stdlib.h>

#define SIZE 5  

int queue[SIZE];
int front = -1, rear = -1;

int isFull() {
    if ((front == 0 && rear == SIZE - 1) || (front == rear + 1))
        return 1;
    return 0;
}


int isEmpty() {
    if (front == -1)
        return 1;
    return 0;
}


void enqueue(int element) {
    if (isFull()) {
        printf("Queue is full! Cannot enqueue %d.\n", element);
        return;
    }

    if (front == -1)
        front = 0; 

    rear = (rear + 1) % SIZE;
    queue[rear] = element;
    printf("Inserted -> %d\n", element);
}


int dequeue() {
    if (isEmpty()) {
        printf("Queue is empty! Cannot dequeue.\n");
        return -1;
    }

    int element = queue[front];
    if (front == rear) {
    
        front = -1;
        rear = -1;
    } else {
        front = (front + 1) % SIZE;
    }

    printf("Deleted -> %d\n", element);
    return element;
}


void display() {
    if (isEmpty()) {
        printf("Queue is empty!\n");
        return;
    }

    printf("Queue elements: ");
    int i = front;
    while (1) {
        printf("%d ", queue[i]);
        if (i == rear)
            break;
        i = (i + 1) % SIZE;
    }
    printf("\n");
}

void peek() {
    if (isEmpty()) {
        printf("Queue is empty!\n");
        return;
    }
    printf("Front element -> %d\n", queue[front]);
}

int main() {
    int choice, value;

    while (1) {
        printf("\n--- Circular Queue Menu ---\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Peek\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            printf("Enter value to insert: ");
            scanf("%d", &value);
            enqueue(value);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            peek();
            break;
        case 5:
            exit(0);
        default:
            printf("Invalid choice! Try again.\n");
        }
    }
    return 0;
}




// #include <stdio.h>
// #include <stdlib.h>

// struct node
// {
//     int data;
//     struct node * next;
// };

// struct node * head = NULL;

// struct node * createnode(int n)
// {
//     struct node * newnode = (struct node *) malloc(sizeof(struct node));
//     newnode->data=n;
//     newnode->next=NULL;
//     return newnode;
// }