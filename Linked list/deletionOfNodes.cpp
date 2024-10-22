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
   struct node* temp = head; // Initialize temp with head
    while (temp != nullptr) { // Iterate until temp is nullptr
        printf("%d ", temp->data); // Print data
        printf("%d ", &temp->data); // Print the address of the memory
        temp = temp->link; // Move to the next node
    }
    printf("\n"); // Print newline after the list

}

void deleteFirstNode(){
    struct node *temp;
    temp = head;
    if(head == 0){
        printf("No element in the list to be deleted");
    }
    head = temp->link;
    free(temp);
    printList();
}
void deleteLastNode(){
    struct node *temp;
    struct node *prev;
    prev = head;
    temp = head;
    if(head == 0){
        printf("There is no element in the list to be deleted");
    }
    while(temp->link != 0){
        temp = temp->link;
    }
    while(prev->link != temp){
        prev = prev->link ;
    }
    prev->link = 0;
    free(temp);
    printList();
}

void deleteAtPosition(int pos){
    struct node * temp , *prev , * next;
    temp = head;
    prev = head;
    int count= 1;
    while(count < pos){
        temp = temp->link;
        count++;
    }
    while (prev->link != temp)
    {
        prev = prev->link;
    }
    next = temp->link;
    prev->link = next;
    free(temp);
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
    printList();
    // deleteFirstNode(); // to Delete the first node
    // deleteLastNode(); // to Delete the Last Node
   // deleteAtPosition(3); // to Delete the Not at any position 1 based indexing
    

    return 0;
}
