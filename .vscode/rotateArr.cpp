#include<iostream>
#include<algorithm>
using namespace std;
 
void rotatearray(int arr[] , int k , int n){
    k = k % n;
    
    reverse(arr , arr + n);
    reverse(arr , arr + k );
    reverse(arr + k ,arr + n);      //this performs right rotation

}
int main(){

int arr[100];
int n;

cout<<"Enter the size of arr : ";
cin >> n;

cout<<"Enter the elements in arr : ";
for(int i = 0 ; i < n ; i++){
    cin>> arr[i];
}

int k;
cout<<"Enter k : ";
cin >> k;

rotatearray(arr,k,n);

cout<<"Rotated array: ";
for(int i = 0 ; i < n ; i++){
    cout<<arr[i];
}
return 0;
}