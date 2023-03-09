#include <iostream>
using namespace std;

void printRevN(int i, int n) {
    if(i<1) return;
    cout<<i<<endl;
    printRevN(i-1,n);
}

int main() {
    int n;
    cin>>n;
    printRevN(n,n);
    return 0;
}