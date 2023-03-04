#include <iostream>
#include <cmath>
using namespace std;

void isPrime(int n) {
    for(int i=2; i<=sqrt(n); i++) {
        if(n%i==0){
            cout<<n<<" is not prime"<<endl;
            return;
        }
    }
    cout<<n<<" is prime"<<endl;
}

int main() {
    int n;
    cin>>n;
    isPrime(n);
    return 0;
}