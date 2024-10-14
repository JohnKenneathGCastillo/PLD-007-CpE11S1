#include <iostream>

using namespace std;

int main() {
    float physics, chemistry, biology, mathematics, computer;
    float total, percentage;

    // Input marks for each subject
    cout << "Enter marks for Physics: ";
    cin >> physics;
    cout << "Enter marks for Chemistry: ";
    cin >> chemistry;
    cout << "Enter marks for Biology: ";
    cin >> biology;
    cout << "Enter marks for Mathematics: ";
    cin >> mathematics;
    cout << "Enter marks for Computer: ";
    cin >> computer;

    // Calculate total and percentage
    total = physics + chemistry + biology + mathematics + computer;
    percentage = (total / 500) * 100;

    // Output marks
    cout << "Physics: " << physics << endl;
    cout << "Chemistry: " << chemistry << endl;
    cout << "Biology: " << biology << endl;
    cout << "Mathematics: " << mathematics << endl;
    cout << "Computer: " << computer << endl;

    // Output average
    cout << "Your Average % is: " << percentage << "%" << endl;

    // Determine grade
    char grade;
    if (percentage >= 90) {
        grade = 'A';
    } else if (percentage >= 80) {
        grade = 'B';
    } else if (percentage >= 70) {
        grade = 'C';
    } else if (percentage >= 60) {
        grade = 'D';
    } else if (percentage >= 50) {
        grade = 'E';
    } else if (percentage >= 40) {
        grade = 'F';
    }

    cout << "Your Grade is: " << grade << endl;

    return 0;
}

