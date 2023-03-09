#include <iostream>
using namespace std;

void parameterFactN(int n, int fact){
    if(n==1 || n==0){
        cout<<fact<<endl;
        return;
    }
    parameterFactN(n-1, fact*n);
}

int functionalFactN(int n) {
    if(n==1 || n==0) return 1;
    return n*functionalFactN(n-1);
}

int main() {
    int n;
    cin>>n;
    parameterFactN(n, 1);
    cout<<functionalFactN(n)<<endl;
    return 0;
}