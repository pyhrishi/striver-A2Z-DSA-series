#include <iostream>
#include <utility>
#include <tuple>
using namespace std;

void explainPair() {
    pair<int, int> p = {1,2};
    cout<<p.first<<endl;
    cout<<p.second<<endl;
    
    pair<string, double> q;
    q = make_pair("Geeks", 3.14);
    cout<<q.first<<endl;
    cout<<q.second<<endl;
    
    pair<int, pair<int,int>> a = {1,{2,3}};
    cout<<a.first<<endl;
    cout<<a.second.first<<endl;
    cout<<a.second.second<<endl;
    
    pair<int,int> arr[] = {{1,2},{3,4},{5,6},{7,8}};
    cout<<arr<<endl;
    cout<<arr[0].first<<endl;
    cout<<arr[3].second<<endl;
    
    pair<int, double> x = {3,3.14};
    pair<int, double> y = {5,6.18};
    cout<<x.first<<" "<<x.second<<endl;
    cout<<y.first<<" "<<y.second<<endl;
    x.swap(y);
    cout<<x.first<<" "<<x.second<<endl;
    cout<<y.first<<" "<<y.second<<endl;
    
    int u,i;
    tie(u,i) = p;
    cout<<u<<" "<<i<<endl;
}

int main() {
    explainPair();
    return 0;
}