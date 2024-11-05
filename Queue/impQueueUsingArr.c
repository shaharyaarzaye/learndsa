#include <stdio.h>

#define N 5

int queue[N];
int front = -1;
int rear = -1;

void enqeue(int  x){
    if(rear == N-1){
        printf("Overflow condition");
    }
    else if(front == -1 && rear == -1){
        front == rear == 0;
        queue[rear] = x;
    }
    else{
        rear++;
        queue[rear] = x;
    }
}
void dequeue(){
    if(front==-1 & rear == -1){
        printf("No element in the Queue");
    }
    else if(front == rear){
        front = rear = -1;
    }
    else{
        printf("%d", queue[front]);
        front++;
    }
}

void peek(){
    if(front == -1 & rear == -1){
        printf("No element in the Queue");
    }
    else{
        printf("%d" , queue[front]);
    }
}



int main(){
    
    enqeue(12);
    enqeue(2);
    enqeue(5);
    peek();
return 0;
}