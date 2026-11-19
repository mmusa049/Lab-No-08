#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    int roll;
    float gpa;
};

int main() {
    Student s1, s2;

    cout << "Enter details for Student 1:\n";
    cout << "Name: ";
    getline(cin >> ws, s1.name);
    cout << "Roll: ";
    cin >> s1.roll;
    cout << "GPA: ";
    cin >> s1.gpa;

    cout << "\nEnter details for Student 2:\n";
    cout << "Name: ";
    getline(cin >> ws, s2.name);
    cout << "Roll: ";
    cin >> s2.roll;
    cout << "GPA: ";
    cin >> s2.gpa;

    cout << "\n--- Result ---\n";
    if (s1.gpa > s2.gpa) {
        cout << "Higher GPA: " << s1.name << " (Roll: " << s1.roll << ", GPA: " << s1.gpa << ")\n";
    } else if (s2.gpa > s1.gpa) {
        cout << "Higher GPA: " << s2.name << " (Roll: " << s2.roll << ", GPA: " << s2.gpa << ")\n";
    } else {
        cout << "Both students have equal GPA\n";
    }

    return 0;
}
