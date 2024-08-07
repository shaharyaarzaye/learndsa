#include<bits/stdc++.h>

using namespace std;

//Reversing the array using single pointer 
// void reverseArry(int i , int arr[], int n){
//     if (i >= n/2){
//         return;
//     }
//     else{
//         swap(arr[i] , arr[n-i-1]);
//         reverseArry(i+1,arr , n);
//     }
// };
// int main(){
//     int n;
//     cout<<"Enter the size of array : ";
//     cin>> n;
//     int arr[n];
//     for(int i =0; i < n ; i++){
//         cout<<"Enter the " << i << "th Element of array : "; 
//         cin>>arr[i];
//     };
//     reverseArry(0,arr,n);
    
//     for(int i = 0; i < n; i++){
//         cout<<arr[i] << " ";
//     }
    

//      return 0;
// }


//check if the string is palendrome or not
// bool f(int n , string &s){
//     if(n >= s.size() /2) return true;
//     if( s[n] != s[s.size() - n - 1]) return false;
//     return f(n+1 , s);
// }
// int main(){
//     string s = "madam";
//     cout<< f(0,s);
//     return 0;
// }

//time complexity of these two code is n/2