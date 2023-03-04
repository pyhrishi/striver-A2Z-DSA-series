#include <iostream>
#include <algorithm>

int main() {
    int arr[] = {3,5,2,7,1,9};
    for(int i : arr) {
        std::cout<<i<<" ";
    }
    std::cout<<std::endl;

    std::sort(std::begin(arr), std::end(arr));
    for(int i : arr) {
        std::cout<<i<<" ";
    }
    std::cout<<std::endl;
    return 0;
}