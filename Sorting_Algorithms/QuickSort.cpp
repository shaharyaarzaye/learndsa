#include <bits/stdc++.h>
using namespace std;

int partition(vector <int> &arr , int low , int high){
    int piviot = arr[low] ;
    int i = low ;
    int j = high;
    while( i < j){
        while(arr[i] <= piviot && i <= high - 1 ) i++;
        while(arr[j] > piviot && j >= low + 1 ) j--;
        if( i < j ) swap(arr[i] , arr[j]);
    }
    swap(arr[low] , arr[j]);
    return j;
}

void qs(vector <int> &arr , int low , int high){
    if( low < high){
        int pivotIndex = partition(arr , low , high); 
        qs(arr, low , pivotIndex - 1);
        qs(arr, pivotIndex + 1 , high);
    }
}

vector <int> QuickSort(vector <int> &arr){
    qs(arr ,0, arr.size()-1);
    return arr;
}

int main(){
    vector <int> arr= {4 ,5 ,3 ,2 , 9 ,3 ,2 ,8};
    int n = arr.size();
    cout << "Array Before Sorting : ";
    for( int i = 0 ; i< n ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    arr = QuickSort(arr);
    cout << "Array After Soritng : ";
    for( int i = 0 ; i< n ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << n;
    return 0;

}
