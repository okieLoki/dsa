#include<bits/stdc++.h>
using namespace std;

vector<int> insertionSort(vector <int> arr){

    for(int i=1; i<arr.size(); i++){

        int current = arr[i];
        int prev = i-1;

        //loop where tjhe element current should be inserted
        while(prev >=0 && arr[prev]>current){
            arr[prev+1] = arr[prev];
            prev = prev - 1;
        }

        arr[prev+1]= current;
    }
    return arr;
}

int main(){

    vector<int> arr={2,4,46,1,-13,0};

    vector<int> sorted_arr = insertionSort(arr);
    for(int x : sorted_arr){
        cout<<x<<" ";
    }

}