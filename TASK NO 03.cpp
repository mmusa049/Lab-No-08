#include <iostream>
using namespace std;

struct Rectangle {
    double length;
    double width;
};

int main() {
    Rectangle rect;

    cout << "Enter length: ";
    cin >> rect.length;

    cout << "Enter width: ";
    cin >> rect.width;

    double area = rect.length * rect.width;
    double perimeter = 2 * (rect.length + rect.width);

    cout << "\n--- Rectangle Results ---\n";
    cout << "Area: " << area << "\n";
    cout << "Perimeter: " << perimeter << "\n";

    return 0;
}
