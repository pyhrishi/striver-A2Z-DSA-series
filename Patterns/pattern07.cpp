#include <iostream>
using namespace std;

void printPattern(int n) {
    for(int i=1; i<=n; i++) {
        //spaces
        for(int j=1; j<=n-i; j++) {
            cout<<" ";
        }

        //stars
        for(int j=1; j<=2*i-1; j++) {
            cout<<"*";
        }
        cout<<endl;
    }
}

int main() {
    int n;
    cin>>n;
    printPattern(n);
    return 0;
}