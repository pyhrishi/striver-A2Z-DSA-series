#include <iostream>
using namespace std;

void printPattern(int n) {
    for(int i=1; i<=n; i++) {
        //spaces
        for(int j=0; j<n-i; j++) {
            cout<<"  ";
        }

        //letters
        for(int j=0; j<i; j++) {
            cout<<(char)(j+65)<<" ";
        }

        //letters
        for(int j=i; j<n; j++) {
            cout<<(char)(j+65)<<" ";
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