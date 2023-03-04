#include <iostream>
using namespace std;

void printDiv(int n) {
    for(int i=1; i<=n/2; i++) {
        if(n%i==0) cout<<i<<" ";
    }
    cout<<n<<endl;
}

int main() {
    int n;
    cin>>n;
    printDiv(n);
    return 0;
}