// #include <iostream>
// #include <vector>

// int main() {
//     std::vector<int> nums = {1, 2, 3, 4, 5};

//     for (size_t i = 0; i <= nums.size(); i++) {
//         std::cout << "Element: " << nums[i] << std::endl;
//         if (nums[i] == 3) {
//             nums.erase(nums.begin() + i);
//         }
//     }

//     std::cout << "Final vector elements: ";
//     for (int num : nums) {
//         std::cout << num << " ";
//     }
//     std::cout << std::endl;

//     return 0;
// }

// #include <iostream>
// #include <vector>

// int main() {
//     std::vector<int> nums = {1, 2, 3, 4, 5};

//     for (size_t i = 0; i < nums.size(); ) {
//         std::cout << "Element: " << nums[i] << "\n";
//         if (nums[i] == 3) {
//             nums.erase(nums.begin()+i);
//         }
//         else{
//             i++;
//         }
//     }

//     std::cout << "Final vector elements: ";
//     for (int num : nums) {
//         std::cout << num << " ";
//     }
//     std::cout << std::endl;

//     return 0;
// }

// #include <iostream>
// #include <utility>
// #include <thread>
// #include <vector>
// using namespace std;

// void Question(vector<pair<std::string,pair<int,std::string>>> &Q);
// void print(const vector<pair<std::string,pair<int,std::string>>> &Q);

// int main(){

//     vector<pair<std::string,pair<int,std::string>>> Q;
//     std::string choose = "y";
    
//     while(choose == "y" || choose == "Y"){
//         std::thread person1 (Question,ref(Q));
//         person1.join();

//         cout << "Do u want to add more details? (y/n) : ";
//         cin >> choose;
//     }

//     std::thread person2 (print,cref(Q));
//     person2.join();

//     return 0;
// }

// void Question(vector<pair<std::string,pair<int,std::string>>> &Q){
//     string name,DOB;
//     int age;
//     cout << "Enter name : ";
//     getline(cin,name);
//     cin.ignore();
//     cout << "Enter age : ";
//     cin >> age;
//     cin.ignore();
//     cout << "Enter DOB 'DD/MM/YYYY' : ";
//     getline(cin,DOB);
//     Q.push_back({name,{age,DOB}});
// }
// void print(const vector<pair<std::string,pair<int,std::string>>> &Q){
//     for(auto i : Q){
//         cout << "********************" << "\n" <<"Name : " << i.first << "\n" << "Age : " << 
//         i.second.first << "\n" << "DOB : " << i.second.second << "\n";
//     }
// }

// #include <iostream>
// #include <thread>
// using namespace std;

// int main(){
//     int a;
//     int b;
//     std::cout << "Enter the value of a: ";
//     cin >> a;
//     std::cout << "Enter the value of b: ";
//     cin >> b;

//     cout << "SUM : " << a+b << "\n";
//     return 0;
// }

// #include <iostream>
// #include <thread>
// using namespace std;

// void fun1(){
//     int a;
//     int b;
//     std::cout << "Enter the value of a: ";
//     cin >> a;
//     std::cout << "Enter the value of b: ";
//     cin >> b;
//     cout << "SUM : " << a+b << "\n";
// }

// int main(){

//     thread worker1(fun1);
//     worker1.join();

//     return 0;
// }

#include <iostream>
#include <vector>

int main() {
    std::vector<int> nums = {1, 2, 3, 4, 5};

    for (size_t i = 0; i < nums.size(); ) {
        std::cout << "Element: " << nums[i] << "\n";
        if (nums[i] == 3) {
            nums.erase(nums.begin()+i);
        }
        else{
            i++;
        }
    }

    std::cout << "Final vector elements: ";
    for (int num : nums) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}