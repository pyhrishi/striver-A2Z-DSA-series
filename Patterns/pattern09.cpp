#include <iostream>
using namespace std;

void printPattern(int n) {
    // Upper pyramid
    for(int i=1; i<=n; i++) {
        //Spaces
        for(int j=1; j<=n-i; j++) {
            cout<<" ";
        }
        //Stars
        for(int j=1; j<=2*i-1; j++) {
            cout<<"*";
        }
        //Newline
        cout<<endl;
    }
    
    // Inverted pyramid
    for(int i=1; i<=n; i++){
        //Spaces
        for(int j=1; j<=i-1; j++) {
            cout<<" ";
        }

        //Stars
        for(int j=1; j<=2*(n-i)+1; j++) {
            cout<<"*";
        }

        //Newline
        cout<<endl;
    }
    
}

int main() {
    int n;
    cin>>n;
    printPattern(n);
    return 0;
}