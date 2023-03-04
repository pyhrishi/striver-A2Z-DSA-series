#include <iostream>
using namespace std;

void printPattern(int n) {
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=i; j++) {
            cout<<(char)(i+64)<<" ";
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