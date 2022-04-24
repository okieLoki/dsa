#include<iostream>

using namespace std;

void printArray(int *arr, int n){ //pass by reference
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){

    int arr[]={1,2,3,4,5,6};

    int n = sizeof(arr)/sizeof(arr[0]);

    printArray(arr,n);

    cout<<endl;

    return 0;
}