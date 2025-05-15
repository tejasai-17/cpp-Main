#include <iostream>
#include <unordered_set>
using namespace std;

int main(){

    unordered_set<int> us;
    us = {3,4,5};

    //insert
    us.insert(2);
    us.insert(1);

    //delete
    us.erase(5);

    //find a value
    int i;
    std::cout << "Enter the value u want to find : ";
    std::cin >> i;
    auto j = us.find(i);
    if(j != us.end()){
        std::cout << "Value was found : " << *j << "\n";
    }
    else{
        std::cout << "Value was not found" << "\n";
    }

    //print
    for(auto x : us){
        std::cout << x << "\n";
    }

    return 0;
}