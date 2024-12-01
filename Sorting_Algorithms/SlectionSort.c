#include<stdio.h>

void selection_sort(int arr[] , int n){
    for(int i = 0 ; i <= n-2; i++){
        int min = i ;
        for(int j = i ; j <= n -1; j++){
            if(arr[j] < arr[min]) min = j;
        }
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
}

int main(){
    int n ;
    printf("Enter the Length of Array : ");
    scanf("%d" , &n);
    int arr[n];
    for(int i = 0 ; i < n ; i++){
       printf("Enter the %d element of array : " , i );
       scanf("%d" , &arr[i]);
    }
    for(int i = 0 ; i < n ; i++){
        printf("%d", arr[i]);
    } 
    printf("\n");
    selection_sort(arr , n);
    for(int i = 0 ; i < n; i++){
        printf("%d", arr[i]);
    } 

}