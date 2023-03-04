#include <iostream>
#include <vector>
using namespace std;
 
void explainVectors() {
    vector<int> v;
    for(int i=1; i<=5; i++) {
        v.push_back(i);
    }
    for(auto it : v) {
        cout<<it<<" ";
    }
    cout<<endl;
}

int main() {
    explainVectors();
    return 0;
}