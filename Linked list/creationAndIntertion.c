#include <stdio.h>
#include <stdlib.h>  // Needed for malloc


struct node {
    int data;
    struct node* link;
};

struct node* head = 0; // Initialize head to nullptr
struct node* newNode;

void insertNode(int n) {
    newNode = (struct node*)malloc(sizeof(struct node));
    struct node* temp;
    newNode->data = n;
    newNode->link = 0;
    
    if (head == 0) { // Check if head is null
        head = newNode;
    } 
    else{
        temp = head ;
        while(temp->link != 0){
            temp = temp->link;
        };
        temp->link = newNode;
    };
    
}

void printList(){
    int len =0;
   struct node* temp = head; // Initialize temp with head
    while (temp != 0) { // Iterate until temp is nullptr
        printf("%d ", temp->data); // Print data
        printf("%d ", &temp->data); // Print the address of the memory
        temp = temp->link; // Move to the next node
        len++;
    }
    printf("\n"); // Print newline after the list
    printf("The Length of the list is : %d" , len );
}

int main() {
    int choice = 1;
    while (choice != 0) { // Corrected to check for 0
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
