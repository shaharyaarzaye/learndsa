#include<stdio.h>
#include<stdlib.h>

int main(){
    int arr[] = {5,3,5,3,5,3}; // Decleration
    int len = sizeof(arr) / sizeof(arr[0]);

    for(int i = 0 ; i < len ; i++){
        printf("%d" , arr[i]);
    }
}