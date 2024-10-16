#include<stdio.h>
#include<iostream>
using namespace std;

struct node {
    int data;
    struct node * next;
};

// Creation // printing // insertion at begning // insertion at random // intertion at the end // deletion at begning // deletion at random // deletion at the end // reversal of linked list 

struct node * head ;


void intertion( int d ){
    struct node * newNode ;
    newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = d;
    newNode->next = NULL;
    head = newNode;
    printf("%d \n" , head->data);

};

void deletion(int pos){
    int i = 1;
    struct node * temp ;
    temp = head;
}


int main(){
   
}