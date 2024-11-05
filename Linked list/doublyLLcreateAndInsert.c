#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *prev;
    struct node *next;
};

struct node *head = NULL; // Initialize head to NULL

void createDLL() {
    int choice = 1;
    struct node *temp = NULL;

    while (choice != 0) {
        struct node *newNode = (struct node *)malloc(sizeof(struct node));
        if (newNode == NULL) {
            printf("Memory allocation failed!\n");
            return;
        }

        printf("Enter the number you want to add: ");
        scanf("%d", &newNode->data);
        newNode->prev = NULL;
        newNode->next = NULL;

        if (head == NULL) {
            head = newNode; // If the list is empty, initialize head
        } else {
            temp->next = newNode; // Link the last node to the new node
            newNode->prev = temp;  // Link the new node back to the last node
        }
        temp = newNode; // Move temp to the new node

        printf("If you want to stop press 0 else press 1: ");
        scanf("%d", &choice);
    }
}

void printList() {
    struct node *temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data); // Print current node's data
        temp = temp->next; // Move to the next node
    }
    printf("\n"); // Print a new line after the list
}

void insertBeg(){
    struct node * newNode;
    newNode = (struct node *)malloc(sizeof(struct node));
    printf("Enter data : ");
    scanf("%d" , &newNode->data);
    newNode->prev = 0;

    head->prev = newNode;
    newNode->next = head->next;
    head = newNode;
}

void insertatEnd(){
    struct node * newNode , *tail;
    newNode = (struct node*)malloc(sizeof(struct node));
    printf("Enter data : ");
    scanf("%d" , &newNode->data);
    newNode->prev = 0;

    tail = head;
    while(tail->next != 0){
        tail = tail->next;
    }
    newNode->next = 0;
    tail->next = newNode;
    newNode->prev = tail;
}

void insertAtPos(){
    struct node * newNode , *temp = head;
    newNode = (struct node*)malloc(sizeof(struct node));
    int pos;
    int count = 1;
    printf("Enter the positon : ");
    scanf("%d" , &pos);
    printf("Enter data : ");
    scanf("%d" , &newNode->data);
    while(count < pos -1){
        temp = temp->next;
    }
    newNode->prev = temp;
    newNode->next = temp->next;
    temp->next->prev = newNode;
}

int main() {
    createDLL();
    printList();
    // insertBeg();
    // printList(); 
    // insertatEnd();
    // printList();
    insertAtPos();
    printList();

    return 0;
}
