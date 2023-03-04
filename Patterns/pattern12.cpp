#include <iostream>
using namespace std;

void printPattern(int n) {
    for(int i=1; i<=n; i++) {
        //numbers
        for(int j=1; j<=i; j++) {
            cout<<j<<" ";
        }

        //spaces
        for(int j=1; j<2*(n-i+1); j++) {
            cout<<"  ";
        }

        //numbers
        for(int j=i; j>=1; j--) {
            cout<<j<<" ";
        }

        //newline
        cout<<endl;
    }
}

int main() {
    int n;
    cin>>n;
    printPattern(n);
    return 0;
}