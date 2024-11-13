#include<iostream>
#include <string>
using namespace std;

std::string toBinaryString(unsigned int n)
{
    std::string result;

    for (int i = 31; i >= 0; --i)
    {
        result += (n & (1 << i)) ? '1' : '0';
    }

    return result;
}

unsigned int reverseBits(unsigned int n) {
    unsigned int result = 0;
    for (int i = 0; i < 32; ++i) {
        result |= (n >> i) & 1 << (31 - i);
    }
    return result;
}

int main()
{
    unsigned int value;
    std::cout << "Enter an unsinged integer:  ";
    cin >> value;

    std::cout << "Original value in bits:  " << toBinaryString(value) << std::endl;

    unsigned int reversedValue = reverseBits(value);
    std::cout << "Reversed value in bits:  " << toBinaryString(reversedValue) << std::endl;

    return 0;
}
