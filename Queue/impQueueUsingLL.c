#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};

struct node * front = 0 ;
struct node * rear = 0 ;

void enqueue(int x){
    struct node * newNode;
    newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = x;
    newNode->next = 0;
    
    if(front == 0 && rear == 0){
        front =rear = newNode;
    }
    else{
        rear->next = newNode;
        rear =newNode;
    }
}

void dequeue(){
    struct node * temp;
    temp = front ;
    if(temp == 0){
        printf("Noting in the Queue");
    }
    else{
        printf("The dequeued item is : %d \n" , temp->data);
        front = temp->next;
        free(temp);
    }
}

void display(){
    struct node * temp;
    if(front == 0 && rear == 0){
        printf("Nothing in the list");
    }
    else{
        temp = front;
        while (temp !=0){
            printf("%d , " , temp->data);
            temp = temp->next;
        }
        
    }
}

void peek(){
    if(front == 0){
        printf("Noting in the queue");
    }
    else{
        printf("The first item in the queue is : %d" , front->data);
    }
}


int main(){

    enqueue(2);
    enqueue(4);
    enqueue(3);
    display();
    dequeue();
    peek();
    
    return 0;

}