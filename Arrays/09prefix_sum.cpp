#include<iostream>

using namespace std;

//time complexity o(n^2)

int maxSubArray(int arr[], int n){

    int prefix[n]={0};

    prefix[0]=arr[0];

    for(int i=1; i<n; i++){
        prefix[i]=prefix[i-1]+arr[i];
    }
    int sum = 0, largest_sum=0;

    for(int i=0; i<n; i++){
        
        for(int j=i; j<n; j++){

            int sum = i>0 ? prefix[j]-prefix[i-1] : prefix[j];

            largest_sum = max(sum,largest_sum);
        }
    }
    return largest_sum;
}

int main(){

    int arr[]={10,20,30,40,50,60,70};

    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<maxSubArray(arr,n)<<endl;
}