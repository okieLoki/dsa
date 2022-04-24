#include<iostream>
using namespace std;

//time complexity is o(n)

int maxSubArray(int arr[],int n){

    int current_sum = 0, max_sum=0;
    for(int i=0 ; i<n; i++){
        current_sum = current_sum + arr[i];

        if(current_sum<0){
            current_sum=0;
        }
        max_sum = max(max_sum, current_sum);
    }
    return max_sum;
}

int main(){

    int arr[]={-2,3,4,-1,5,-12,6,1,3};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<maxSubArray(arr,n)<<endl;
    return 0;
}