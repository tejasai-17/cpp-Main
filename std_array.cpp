#include <iostream>
#include <array>
using namespace std;

// void fun(std::array<int,3> arr);

int main(){

    // std::array<int,3> arr = {1,2,3};
    // fun(arr);

    std::array<int,5> myarr;
    cout << "Enter five number:";
    for(auto &x : myarr){
        cin >> x;
    }
    for(auto &x : myarr){
        cout << x << " ";
    }
    return 0;
}

// void fun(std::array<int,3> arr){
//     cout << arr.size();
// }


