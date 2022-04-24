#include<bits/stdc++.h>
using namespace std;

int maxSumSubarray(vector<int> A) {
    
    int currentSum =0, maxSum =INT_MIN;
    
    for(auto x: A){
        
        currentSum = currentSum + x;
        
        maxSum = max(maxSum, currentSum);
        
        if(currentSum < 0){
            currentSum = 0;
        }
        
    }
    return maxSum;
}

int main(){
    
    vector<int> arr={-1};
    
    cout<<maxSumSubarray(arr)<<endl;
}