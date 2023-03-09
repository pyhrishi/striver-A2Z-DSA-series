#include <iostream>
using namespace std;

void sumNNos(int i, int sum) {
    if(i<1) {
        cout<<sum<<endl;
        return;
    }
    sumNNos(i-1, sum+i);
}

int main() {
    int n;
    cin>>n;
    sumNNos(n,0);
    return 0;
}