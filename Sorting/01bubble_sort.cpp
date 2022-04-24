#include<bits/stdc++.h>
using namespace std;

vector<int> insertionSort(vector <int> arr){
    for(int i=0; i<arr.size();i++){
        for(int j=i+1; j<arr.size(); j++){
            if(arr[i]>arr[j]){
                swap(arr[i], arr[j]);
            }
        }
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