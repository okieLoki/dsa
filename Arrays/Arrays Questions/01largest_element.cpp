#include<bits/stdc++.h>
using namespace std;

int largestElement(vector<int> arr) {
    int max = arr[0];
    for(int i=0; i<arr.size(); i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }
    return max;
}

int main(){
    
    vector<int> arr={1,2,3,4,5};
    
    cout<<largestElement(arr);
}