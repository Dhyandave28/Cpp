#include <iostream>
using namespace std;

class Product {
private:
    int ProductID;
    double Price;
    int Quantity;

public:
    // Function to accept product details
    void Input() {
        cout << "Enter Product ID: ";
        cin >> ProductID;
        cout << "Enter Price: ";
        cin >> Price;
        cout << "Enter Quantity: ";
        cin >> Quantity;
    }

    // Constant function to display product information
    void ShowProduct() const {
        cout << "\n--- Product Details ---" << endl;
        cout << "Product ID: " << ProductID << endl;
        cout << "Price: " << Price << endl;
        cout << "Quantity: " << Quantity << endl;
    }
};

int main() {
    Product p1;

    // Accept product details
    p1.Input();

    // Display product details
    p1.ShowProduct();

    return 0;
}
