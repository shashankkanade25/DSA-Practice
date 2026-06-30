#include<iostream>
using namespace std;
int largest(int arr[],int n){
    int currmax = arr[0]; 
    for(int i = 0 ; i < n ; i++){
        if(arr[i] > currmax ){
            currmax = arr[i];
        }
    }
    return currmax;
}
int main(){
int arr[] = {3,4,61,5,0};
int n = sizeof(arr) / sizeof(arr[0]);

cout<<"Max Ele : "<<largest(arr,n);
return 0;
}