#include<iostream>
#include<vector>

using namespace std;

int main(){
    
    //fill constructor
    vector<int> A(10,7);
    for(int x: A){
        cout<<x<<" ";
    }
    cout<<endl;

    //initializing a vector
    vector<int> arr = {1,2,3,4,5};

    //push back element
    arr.push_back(6);

    //pop back element
    arr.pop_back();

    //print elements of vector
    for(int x: arr){
        cout<<x<<" ";
    }
    cout<<endl;

    //size of the vector(no of elements)
    cout<<arr.size()<<endl;

    //capacity of the vector
    cout<<arr.capacity()<<endl;
}