#include<bits/stdc++.h>
using namespace std;

vector<int> kRotate(vector<int> a, int k){
    
    while(k!=0){
    
        for(int i=0; i<a.size()-1; i++){
            swap(a[i], a[a.size()-1]);
        }
        k = k -1;
    }
    return a;
}

int main(){
    
    vector<int> a= {1,3,5,7,9};
    
    vector<int> rot = kRotate(a,2);
    
    for(int x:rot){
        cout<<x<<" ";
    }
}