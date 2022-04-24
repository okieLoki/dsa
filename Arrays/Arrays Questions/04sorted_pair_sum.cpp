#include<bits/stdc++.h>
using namespace std;

pair<int, int> closestSum(vector<int> arr, int  x){
    
    pair<int,int> res;
    
    for(int i=0; i<arr.size(); i++){
        for(int j= i+1; j<arr.size(); j++){
            
            if(arr[i]+arr[j]==x){
               res = {arr[i],arr[j]};
            }
            
            else if(arr[i]+arr[j]<x){
                res = {arr[i],arr[j]};
            }
        }
    }
    return res;
}

int main(){
    
    vector<int> arr= {10,22,28,29,30,40};
    pair<int,int> res = closestSum(arr, 54);
    
    cout<<res.first<<" and "<<res.second;
}