#include <iostream>
using namespace std;

void printNBacktrack(int i, int n) {
    if(i<1) return;
    printNBacktrack(i-1, n);
    cout<<i<<endl;
}

int main() {
    int n;
    cin>>n;
    printNBacktrack(n,n);
    return 0;
}