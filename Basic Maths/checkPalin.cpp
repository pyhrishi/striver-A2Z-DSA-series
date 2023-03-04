#include <iostream>
using namespace std;

int reverseNum(int n) {
    int rev = 0;
    while(n>0) {
        int rem = n%10;
        rev = rev*10 + rem;
        n/=10;
    }
    return rev;
}

bool checkPalin(int n) {
    if(reverseNum(n)==n) return true;
    else return false;
}

int main () {
    int n;
    cin>>n;
    if(checkPalin(n)) cout<<n<<" is palin"<<endl;
    else cout<<n<<" is not palin"<<endl;
    return 0;
}