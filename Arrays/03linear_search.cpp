#include<iostream>

using namespace std;


//time complexity of this algorithm is O(n)

int linear_search(int arr[], int n, int key){
    for(int i=0; i<n; i++){
        //check if current element matches the key
        if(arr[i]==key){
            return i;
        }
    }
    //out of loop
    return -1;
}

int main(){

    int arr[]={1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);

    int key;
    cin>>key;

    int index = linear_search(arr,n,key);

    if(index!=-1) cout<<"Key is at index "<<index<<endl;
    else cout<<"Key not found"<<endl;

    return 0;

}