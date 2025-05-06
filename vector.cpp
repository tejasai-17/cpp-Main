#include <iostream>
#include <vector>
using namespace std;

void print(const std::vector<std::vector<int>> &grid);

int main(){

    // vector<std::string> s1;

    // s1.push_back("Tejasai ");
    // s1.push_back("S");

    // for(auto i : s1){
    //     std::cout << i;
    // }

    std::vector<std::vector<int>> grid = {
        {1, 2, 3},
        {4, 5, 6}
    };
    grid[0][1] = 10; 
    grid.push_back({7, 8, 9}); 

    print(grid);

    return 0;
}

void print(const std::vector<std::vector<int>> &grid){
    for(auto i : grid){
        for(auto j : i){
            std::cout << j << " ";
        }
        std::cout << "\n";
    }
}