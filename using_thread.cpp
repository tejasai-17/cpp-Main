#include <iostream>
#include <thread>
#include <map>
#include <chrono>
using namespace std::chrono_literals;


void refresh(std::map<std::string , int> &forcasting){
    while (true)
    {
        for(auto &i:forcasting){
            i.second++;
            std::cout << i.first << " - " << i.second << "\n";
        }
        std::this_thread::sleep_for(2000ms);
    }
    
}

int main(){

    std::map<std::string , int> forcasting = {
        {"dheli",34},{"karnataka",31},{"bihar",42}
    };

    std::thread user(refresh,std::ref(forcasting));

    user.join();

    return 0;
}