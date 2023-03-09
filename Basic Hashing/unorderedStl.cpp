#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];

    string s;
    cin>>s;

    //pre-compute
    unordered_map<int, int> mpp;
    for(int i=0; i<n; i++) mpp[arr[i]]++;
    unordered_map<char, int> mpc;
    for(int i=0; i<s.size(); i++) mpc[s[i]]++;

    //fetch
    cout<<mpp[3]<<endl;
    cout<<mpc['a']<<endl;

    return 0;
}