#include<stdio.h>

void bubbleSort(int arr[] , int n){
    
    for(int i = n-1 ;  i > 1 ; i--){
        int noSwapfound = 0;
        for(int j = 0 ; j < i  ; j++){
            if(arr[j+1] < arr[j] ){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
                noSwapfound = 1;
            }
        }
        if(noSwapfound == 0 ){
            printf("\nThe Array is Already Sorted !!! \n");
            break;
        }
    }
}

int main(){
    int n ;
    printf("Enter the length of array : ");
    scanf("%d" , &n);
    int arr[n];
    for(int i = 0 ;  i < n; i++){
        scanf("%d" , &arr[i]);
    }
    printf("The Unsorted Array is : ");
    for(int i = 0 ; i< n ; i++){
        printf("%d" , arr[i]);
    }
    bubbleSort(arr , n);
    printf("\nThe Sorted Array is : ");
    for(int i = 0 ; i< n ; i++){
        printf("%d" , arr[i]);
    }
}