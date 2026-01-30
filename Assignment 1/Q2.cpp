#include<iostream>
using namespace std;

void merge(int arr[],int l,int m,int r){

    int n1=m-l+1;
    int n2=r-m;

    int L[n1], R[n2];

    for (int i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    int i = 0, j = 0, k = l;

    while (i < n1 && j < n2) {
        if (L[i] <= R[j])
            arr[k++] = L[i++];
        else
            arr[k++] = R[j++];
    }

    while (i < n1)
        arr[k++] = L[i++];

    while (j < n2)
        arr[k++] = R[j++];
}   



void mergesort(int arr[],int l,int r){
    if (r>l){
        int m=l+(r-1)/2;

        mergesort(arr,l,m-1);
        mergesort(arr,m+1,r);
        merge(arr,l,m,r);

    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}
int main (){
    int arr[] ={12, 11, 13, 5, 6, 7};
    int arr2[] ={38, 27, 43, 3, 9, 82, 10};

    int n1 = sizeof(arr)/sizeof(arr[0]);
    int n2 = sizeof(arr2)/sizeof(arr2[0]);

    cout << "Original Array 1: ";
    printArray(arr, n1);
    mergesort(arr, 0, n1 - 1);
    cout << "Sorted Array 1:   ";
    printArray(arr, n1);

    cout << "\nOriginal Array 2: ";
    printArray(arr2, n2);
    mergesort(arr2, 0, n2 - 1);
    cout << "Sorted Array 2:   ";
    printArray(arr2, n2);

    return 0;
}   
