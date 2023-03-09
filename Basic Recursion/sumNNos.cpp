#include <iostream>
using namespace std;

int sumNNos(int n) {
    int sum = 0;
    if(n==0) return sum;
    sum = sum + n;
    sumNNos(n-1);
}

int main() {
    int n;
    cin>>n;
    cout<<sumNNos(n)<<endl;
    return 0;
}