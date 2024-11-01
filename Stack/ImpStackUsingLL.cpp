#include<stdio.h>
#include<iostream>

struct node {
    int data ;
    struct node * link;

};

struct node *top;

void push(int x){
    struct node * newNode;
    newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = x;
    newNode->link = top;
    top = newNode;
}

void display(){
    struct node *temp;
    temp = top;
    if(top == 0){
        printf("Noting in the stack");
    }
    else{
        while (temp !=0)
        {
            printf("%d" , temp->data);
            temp = temp->link;
        }
        
    }
}

void peek(){
    if(top == 0){
        printf("No sufficient data");
    }
    else{
        printf("The top element is : %d", top->data );
    }
}

void pop(){
    struct node *temp;
    temp = top;
    if(top == 0){
        printf("Insufficient data");
        
    }
    else{
        printf("The popped element is : %d" , top->data);
        top = top->link ;
        free(temp);
    }
}



int main(){

    return 0;
}