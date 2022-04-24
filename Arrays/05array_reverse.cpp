#include<iostream>

using namespace std;

//time complexity is O(n)
void array_reverse(int arr[], int n){
    
    int start = 0;
    int end = n-1;

    //swap algorithm
    while(start<=end){
        swap(arr[start],arr[end]);
        start+=1;
        end-=1;
    }
}

int main(){

    int arr[]={10,20,30,40,50,60,70,80};

    int n = sizeof(arr)/sizeof(arr[0]);

    array_reverse(arr,n);

    //printing the output
    for(int i =0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    return 0;
}