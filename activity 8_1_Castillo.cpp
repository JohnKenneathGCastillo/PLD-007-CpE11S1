#include <iostream>
using namespace std;

int main() {
    int sum = 0;

    for (int i = 2; i <= 100; i += 2) {
        sum += i;
    }

    std::cout << "The sum of all even integers from 2 to 100 is: " << sum << std::endl;

    return 0;
}

