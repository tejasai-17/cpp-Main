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

