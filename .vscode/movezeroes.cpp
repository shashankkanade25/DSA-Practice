#include<iostream>
using namespace std;

void movezeroes(int arr[], int n){
    int i = 0;
    for(int j = 0 ; j < n ; j++){
        if(arr[j] != 0){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
        }
    }
}

 
int main(){

int arr[] = { 0,1,3,0,4,2,0,5};
int n = sizeof(arr) / sizeof(arr[0]);

movezeroes(arr,n);
cout<<"Move Zeroes array : ";
for(int i = 0 ; i < n ; i++){
    cout<<arr[i];
}
return 0;
}