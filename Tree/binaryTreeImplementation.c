#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node*left;
    struct node* right;

};

struct node* create(){
    int x; 
    struct node* newNode;
    newNode = (struct node*)malloc(sizeof(struct node));
    printf("Enter data (if you dont want to enter data press -1) :");
    scanf("%d" , &x);
    if(x == -1){
        return 0;
    }
    newNode->data = x;
    printf("Enter the left child of %d : " , x);
    newNode->left = create();
    printf("Enter the right child of %d :" ,  x);
    newNode->right = create();
    return newNode;
};

void preorder(struct node * root){
    if(root == 0){
        return ;
    }
    printf("%d" , root->data);
    preorder(root->left);
    preorder(root->right);
}

void postorder(struct node * root){
    if(root == 0){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    printf("%d" , root->data);

}

void inorder(struct node *root){
    if(root == 0){
        return;
    }
    inorder(root->left);
    printf("%d" , root->data);
    inorder(root->right);
}

int main(){

    struct node * root;
    root = 0;
    root = create();

    printf("PreOrder is : ");
    preorder(root);

    printf("Postorder is : ");
    postorder(root);
    printf("Inorder is : ");
    inorder(root);

}