#include <iostream>
using namespace std;

int revNum(int n) {
    int res = 0;
    while(n>0) {
        int rem = n % 10;
        res = res*10 + rem;
        n/=10;
    }
    return res;
}

int main() {
    int n;
    cin>>n;
    cout<<revNum(n)<<endl;
    return 0;
}