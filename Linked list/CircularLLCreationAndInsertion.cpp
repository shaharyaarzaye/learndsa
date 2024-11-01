#include <stdio.h>
#include <stdlib.h>  // Needed for malloc

struct node {
    int data;
    struct node* link;
};

struct node* head = NULL; // Initialize head to NULL

void insertNode(int n) {
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    struct node* temp;
    newNode->data = n;

    if (head == NULL) { // Check if head is NULL
        head = newNode;
        newNode->link = head; // Point to itself for circularity
    } 
    else {
        temp = head;
        while (temp->link != head) { // Iterate until reaching head again
            temp = temp->link;
        }
        temp->link = newNode; // Set the last node's link to new node
        newNode->link = head; // New node points to head
    }
}

void printList() {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    struct node* temp = head; // Initialize temp with head
    do {
        printf("%d ", temp->data); // Print data
        temp = temp->link; // Move to the next node
    } while (temp != head); // Stop when we reach back to head
    printf("\n");
}

int main() {
    int choice = 1;
    while (choice != 0) {
        int n;
        printf("Enter the number you want to add to the list: ");
        scanf("%d", &n);
        insertNode(n);
        printf("If you want to stop adding press 0, otherwise press any other number: ");
        scanf("%d", &choice);
    }
    printList();

    return 0;
}
