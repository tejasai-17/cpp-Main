#include <iostream>
#include <thread>

void function1(char sys){
    for (int i = 0; i < 200; i++){
        std::cout << sys;
    }
    
}

void function2(){
    for (int i = 0; i < 200; i++){
        std::cout << "B";
    }
    
}

void function3(){
    for (int i = 0; i < 200; i++){
        std::cout << "C";
    }
    
}

int main(){

    std::thread person1(function1,'A');
    std::thread person2(function2);
    std::thread person3(function3);

    person1.join();
    person2.join();
    person3.join();

    return 0;
}