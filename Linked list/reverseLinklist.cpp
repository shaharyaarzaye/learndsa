#include <stdio.h>
#include <stdlib.h>  // Needed for malloc


struct node {
    int data;
    struct node* link;
};

struct node* head = nullptr; // Initialize head to nullptr
struct node* newNode;

void insertNode(int n) {
    newNode = (struct node*)malloc(sizeof(struct node));
    struct node* temp;
    newNode->data = n;
    newNode->link = nullptr;
    
    if (head == nullptr) { // Check if head is null
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
    while (temp != nullptr) { // Iterate until temp is nullptr
        printf("%d ", temp->data); // Print data
        printf("%d ", &temp->data); // Print the address of the memory
        temp = temp->link; // Move to the next node
        len++;
    }
    printf("\n"); // Print newline after the list
    printf("The Length of the list is : %d" , len );
     printf("\n");
}

void reverseList(){
    struct node *prev , *curr , *next ;
    curr = next = head;
    prev = 0;
    while(next != 0){
        next = next->link;
        curr->link = prev;
        prev = curr;
        curr = next;
    }
    head = prev;
    printList();
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
    printf("This is the list you want to print : ");
    printList(); 
    printf("This is the reversed list : ");
    reverseList();
    return 0;
}
