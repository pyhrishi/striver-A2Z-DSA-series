#include <iostream>
using namespace std;

int countDigits(int n) {
    int count = 0;
    while(n!=0) {
        int rem = n%10;
        n/=10;
        count++;
    }
    return count;
}

int main() {
    int n;
    cin>>n;
    cout<<countDigits(n)<<endl;
    return 0;
}