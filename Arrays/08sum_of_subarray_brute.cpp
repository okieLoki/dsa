#include<iostream>

using namespace std;

//time complexity o(n^3)

int maxSubArray(int arr[], int n){

    int sum = 0, largest_sum=0;

    for(int i=0; i<n; i++){
        
        for(int j=i; j<n; j++){

            for(int k=i; k<=j; k++){
                sum = sum + arr[k];
            }
            if(sum>largest_sum){
                largest_sum=sum;
            }
            sum = 0;
        }
    }
    return largest_sum;
}

int main(){

    int arr[]={10,20,30,40,50,60,70};

    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<maxSubArray(arr,n)<<endl;
}