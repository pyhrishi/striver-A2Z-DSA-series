#include <iostream>
#include <algorithm>
using namespace std;

void printArray(int* arr, int n) {
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main() {
    int arr[] = {1,5,8,9,6,7,3,4,2,0};
    int n = sizeof(arr)/sizeof(int);
    printArray(arr,n);
    sort(arr,arr+n);
    printArray(arr,n);
    if(binary_search(arr,arr+n,2)) {
        cout<<"Found"<<endl;
    } else cout<<"Absent"<<endl;
    return 0;
}