#include<stdio.h>
#include<stdlib.h>


struct node
{
    int data;
    struct node * next;
};

struct node * front = 0;
struct node * rear = 0;

void enqueue(int x){
    struct node * newNode;
    newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = x;
    newNode->next = 0;
    if(rear == 0){
        front = rear = newNode;
        rear->next = front;
    }
    else{
        rear->next = newNode;
        rear = newNode;
        rear->next = front;
    }

}

void dequeue(){
    struct node * temp;
    if(front == 0 && rear == 0){
        printf("Empty queue");
    }
    else if(front == rear){
        front = rear = 0;
        free(temp);
    }
    else{
        front = front->next;
        rear->next = front;
        free(temp);
    }
}

void peek(){
    if(front == 0 && rear == 0){
        printf("Empty queue");
    }
    else{
        printf("%d" , front->data);
    }
}

void display(){
    struct node* temp;
    temp = front;
    if(front == 0 && rear == 0){

    }
    else{
        while(temp->next != front){
            printf("%d" , temp->data);
            temp = temp->next;
        }
        printf("%d" , temp->data);
    }
}


int main(){

    return 0;
}