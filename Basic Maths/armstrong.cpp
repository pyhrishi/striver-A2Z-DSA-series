#include <iostream>
using namespace std;

int digitCubes(int n) {
    int sum = 0;
    while(n>0) {
        int rem = n%10;
        sum = sum + rem*rem*rem;
        n/=10;
    }
    return sum;
}

void isArmstrong(int n) {
    if(digitCubes(n) == n) cout<<n<<" is Armstrong"<<endl;
    else cout<<n<<" is not Armstrong"<<endl;
}

int main() {
    int n;
    cin>>n;
    isArmstrong(n);
    return 0;
}