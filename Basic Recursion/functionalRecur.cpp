#include <iostream>
using namespace std;

int sumNos(int n) {
    if(n==0) return 0;
    return n + sumNos(n-1);
}

int main() {
    int n;
    cin>>n;
    cout<<sumNos(n)<<endl;
    return 0;
}