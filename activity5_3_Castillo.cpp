#include <iostream>

int main() {
    int number = 0;    
    int sum = 0;   

    std::cout << "Enter a number (-1 to end): ";
    std::cin >> number;

    while (number != -1) {
        sum += number;  

        std::cout << "Enter a number (-1 to end): ";
        std::cin >> number;
    }

    std::cout << "The total sum is: " << sum << std::endl;

    return 0;
}

