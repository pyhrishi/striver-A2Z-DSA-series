#include <iostream>
using namespace std;

void printPattern(int n) {
    for(int i=1; i<=n; i++) {
        //spaces
        for(int j=1; j<=i-1; j++) {
            cout<<" ";
        }

        //stars
        for(int j=1; j<=2*(n-i)+1; j++) {
            cout<<"*";
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