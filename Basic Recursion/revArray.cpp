#include <iostream>
using namespace std;

void printArray(int* arr, int n) {
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void revArray(int* arr, int l, int r) {
    if(l>=r) return;
    swap(arr[l], arr[r]);
    revArray(arr, l+1, r-1);
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];
    printArray(arr,n);
    revArray(arr,0,n-1);
    printArray(arr,n);
    return 0;
}