#include <iostream>
using namespace std;

void printPattern(int n) {
    for(int i=0; i<=n-1; i++) {
        for(int j=65; j<=65+i; j++) {
            cout<<(char)j<<" ";
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