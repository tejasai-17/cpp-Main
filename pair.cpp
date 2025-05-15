#include <iostream>
#include <utility>
#include <vector>
using namespace std;

int main(){

    // pair <int,std::string> p;
    // p = {18,"Tejasai"};
    
    // cout << p.first << " " << p.second << "\n";

//What we can do when we have multiple value is to use vector

    vector<pair<int,std::string>> vp;
    vp.push_back({18,"Tejasai"});
    vp.push_back({17,"Bob"});
    vp.push_back({21,"Alice"});
    vp.push_back({19,"Rohit"});

    for(auto i : vp){
        std::cout << i.first << " " << i.second << "\n";
    }

    return 0;
}