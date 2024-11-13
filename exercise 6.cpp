#include <iostream>
using namespace std;

int main() {
    int data[12] = {15, 22, 8, 7, 42, 5, 19, 31, 9, 2, 47, 24};
    int target = 12;
    int index = -1;

    for (int i = 0; i < 12; ++i) {
        if (data[i] == target) {
            index = i; 
            break;
        }
    }

    if (index != -1) {
        cout << "Found " << target << " at index " << index << endl;
    } else {
        cout << target << " not found in the list." << endl;
    }

    return 0;
}
