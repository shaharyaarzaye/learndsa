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

void deleteBeg(){
    struct node * temp;
    temp = head;
    head = temp->next;
    free(temp);
}

void deleteEnd(){
 
     struct node *temp = head;
    if (head == NULL) {
        // List is empty
        return;
    }
    
    
    // Traverse to the last node
    while (temp->next != NULL) {
        temp = temp->next;
    }
    
    // If there's only one node
    if (temp->prev == NULL) {
        free(temp);
        head = NULL; // List is now empty
        return;
    }
    
    // Update the last node's previous node
    temp->prev->next = NULL;
    free(temp);
}

void deleteAt(int pos){
    int count = 1;
    struct node *temp;
    temp = head;
    while(count < pos ){
        temp= temp->next;
        count++;
  }
  temp->prev->next = temp->next;
  temp->next->prev = temp->prev;
  free(temp);
}
int main() {
    createDLL();
    printList();
    // deleteBeg();
    // deleteEnd();
   
    deleteAt(4);
    printList();
    return 0;
}
