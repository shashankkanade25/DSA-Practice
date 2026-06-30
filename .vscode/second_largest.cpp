#include<iostream>
#include<climits>
using namespace std;
int secondLargest(int arr[] , int n){
    int max = INT_MIN;
    int secondmax = INT_MIN;
    for(int i = 0 ; i < n ; i++){
        if(arr[i] > max){
            secondmax = max;
            max = arr[i];
        }

        else if(arr[i] > secondmax && arr[i] != max){
           secondmax = arr[i];
        }
    }
    return secondmax;
}
 
int main(){
int n;
cout << "Enter size of array: ";
cin>>n;

int arr[100];

cout<<"Enter array elements: ";

for(int i = 0 ; i < n ; i++){
    cin>>arr[i];
} 

cout<<"Second largest : "<<secondLargest(arr,n);
return 0;
}