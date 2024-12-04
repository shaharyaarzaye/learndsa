#include <stdio.h>

void insertionSort(int arr[] , int n){
    for(int i = 0  ; i <= n-1 ; i++){
        int j = i;
        while ( j > 0  && arr[j-1] > arr[j])
        {
                int temp = arr[j-1];
                arr[j-1] = arr[j];
                arr[j] = temp;
                j--;
        }
        
    }
}

int main(){
    int n ;
    printf("Enter the Length of Array : ");
    scanf("%d" , &n);
    int arr[n];
    
    for(int i = 0 ; i< n;  i++){
        printf("Enter %d element of array : " , i);
        scanf("%d" , &arr[i]);
    } 
    printf("The Unsorted Array is : ");
    for(int i = 0  ; i < n ; i++ ){
        printf("%d  " , arr[i]);
    }
    printf("\n");
    insertionSort(arr , n);
    printf("The Sorted array is : ");
    for(int i = 0  ; i < n ; i++){
        printf("%d  " , arr[i]);
    }
    return 0;
}