#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *next;
};
struct node *front = NULL;
struct node *rear = NULL;
void enqueue() {
    int value;
    struct node *newnode;
    printf("Enter element: ");
    scanf("%d",&value);
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = value;
    newnode->next = NULL;
    if(front == NULL) {
    front = rear = newnode;
}
    else {
    rear->next = newnode;
    rear = newnode;
}
}
void dequeue() {
    struct node *temp;
    if(front == NULL) {
    printf("Queue Underflow\n");
}
    else {
    temp = front;
    printf("Deleted element: %d\n", temp->data);
    front = front->next;
    free(temp);
}
}
void display() {
    struct node *temp = front;
    if(front == NULL) {
    printf("Queue is empty\n");
}
    else {
    printf("Queue elements:\n");
    while(temp != NULL) {
    printf("%d ", temp->data);
    temp = temp->next;
}
    printf("\n");
}
}
int main() {
    int choice;
    while(1) {
    printf("\n1.Enqueue\n2.Dequeue\n3.Display\n");
    printf("Enter choice: ");
    scanf("%d",&choice);
    switch(choice) {
        case 1: enqueue(); break;
        case 2: dequeue(); break;
        case 3: display(); break;
    default: printf("Invalid choice\n");
}
}
    return 0;
}