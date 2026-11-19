#include <iostream>
#include <string>
using namespace std;

struct Laptop {
    string brand;
    int ram;     // in GB
    double price;
};

int main() {
    Laptop l;

    cout << "Enter laptop brand: ";
    getline(cin >> ws, l.brand);

    cout << "Enter RAM (in GB): ";
    cin >> l.ram;

    cout << "Enter price: ";
    cin >> l.price;

    cout << "\n--- Laptop Specifications ---\n";
    cout << "Brand: " << l.brand << "\n";
    cout << "RAM: " << l.ram << " GB\n";
    cout << "Price: " << l.price << "\n";

    return 0;
}
