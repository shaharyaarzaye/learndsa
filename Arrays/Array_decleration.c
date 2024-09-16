#include<stdio.h>
#include<stdlib.h>
int main(){
    int arr[5] = {3,5,2,4,5}; // Static Declaration 

    
    int n;
    scanf("%d" , &n);
    int*arrr = (int*)malloc(n * sizeof(int)); // Dynamic Deflarationo n can be anyting 
    return 0;
}