#include <iostream>
using namespace std;

void printNRevBacktrack(int i, int n) {
    if(i>n) return;
    printNRevBacktrack(i+1, n);
    cout<<i<<endl;
}

int main() {
    int n;
    cin>>n;
    printNRevBacktrack(1,n);
    return 0;
}