#include <iostream>
using namespace std;

int main() {
    float physics, chemistry, biology, mathematics, computer;
    char grade;

    // marks of each subject
    cout << "Enter marks of the subjects:\n";
    cout << "Enter your marks in Physics: ";
    cin >> physics;
    cout << "Enter your marks in Chemistry: ";
    cin >> chemistry;
    cout << "Enter your marks in Biology: ";
    cin >> biology;
    cout << "Enter your marks in Mathematics: ";
    cin >> mathematics;
    cout << "Enter your marks in Computer: ";
    cin >> computer;

    // total percentage
    float total = physics + chemistry + biology + mathematics + computer;
    float percentage = total / 5;

    // Display marks
    cout << "\nMarks:\n";
    cout << "Physics      : " << physics << endl;
    cout << "Chemistry    : " << chemistry << endl;
    cout << "Biology      : " << biology << endl;
    cout << "Mathematics  : " << mathematics << endl;
    cout << "Computer     : " << computer << endl;

    // Display average
    cout << "\nYour Average marks is : " << percentage << endl;

    // Determine grade
    switch ((int)percentage / 10) {
        case 9:
        case 10:
            grade = 'A';
            break;
        case 8:
            grade = 'B';
            break;
        case 7:
            grade = 'C';
            break;
        case 6:
            grade = 'D';
            break;
        case 5:
            grade = 'E';
            break;
        default:
            grade = 'F';
    }

    // Display grade
    cout << "Grade Level: " << grade << endl;

    return 0;
}

