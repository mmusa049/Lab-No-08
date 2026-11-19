#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    int roll;
    float gpa;
};

int main() {
    Student s;

    cout << "Enter student name: ";
    getline(cin >> ws, s.name);

    cout << "Enter roll number: ";
    cin >> s.roll;

    cout << "Enter GPA: ";
    cin >> s.gpa;

    cout << "\n--- Student Information ---\n";
    cout << "Name: " << s.name << "\n";
    cout << "Roll Number: " << s.roll << "\n";
    cout << "GPA: " << s.gpa << "\n";

    return 0;
}
