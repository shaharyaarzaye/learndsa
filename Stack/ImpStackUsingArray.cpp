//Stack is Linear Data Structure 
// First in Last out , Last in First out
// Operations : Push , Pop , 

#include<stdio.h>
#include<stdlib.h>

int stack[5];
int top = -1;

void push(){
    int x;
    printf("Enter the number you want to push : ");
    scanf("%d" , &x);
    if(top == 4 ){
        printf("Overflow condition");
    }
    else{
        top++;
        stack[top] = x;
    }
}
void pop(){
    int item;
    if(top == -1){
        printf("UnderFlow Condition ");
    }
    else{
        item = stack[top];
        printf("The Poped item is %d" , &item);
    }
}

void peek(){
    if(top == -1){
        printf("No element in the Stack Underflow condition");
    }else{
        printf("The Last element of the Stack is : %d" , stack[top]);
    }
}

void display(){
    int i ;
    for(i = top ; i <= 0 ; i--){
        printf("%d" , stack[i]);
    }
}


int main(){
    printf("This is the programm to learn Stack data Structure\n");
    return 0;
}