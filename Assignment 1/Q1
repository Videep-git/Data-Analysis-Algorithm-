#include<iostream>
#include<vector>
using namespace std;

int binarysearch(int low ,int high,int x,vector<int> &arr){

    if (high>=low){
        int mid=low+(high-low)/2;
    

        if(arr[mid]==x){
           return mid;
        }
        
        if(arr[mid]>x){
            return binarysearch(low,mid-1,x,arr);

        }

        if(arr[mid]<x){
            return binarysearch(mid+1,high,x,arr);
        }
    return -1;}   

}
int main (){
    vector<int> arr = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int n=arr.size();
    int x=23;
    int result=binarysearch(0,n-1,x,arr);
    cout<<"The result is present at index "<<result;
    



    return 0;
}