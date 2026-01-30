#include<iostream>
using namespace std;

int maxsum(int arr[],int n){
    int curr_sum=arr[0];
    int max_sum=arr[0];

    for(int i=0;i<n;i++){
        curr_sum=max(arr[i],curr_sum+arr[i]);
        max_sum=max(curr_sum,max_sum);
    }

    return max_sum;
}


int main (){
    int arr[]={-2, -5, 6, -2, -3, 1, 5, -6};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"The max sum of subarray = " <<maxsum(arr,n);


    return 0;
}