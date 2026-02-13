#include <iostream>
using namespace std;

class ElectricityBill {
private:
    int ConsumerNumber;
    string ConsumerName;

    // Nested class Bill
    class Bill {
    private:
        int UnitsConsumed;

    public:
        // Function to accept units consumed
        void InputUnits() {
            cout << "Enter Units Consumed: ";
            cin >> UnitsConsumed;
        }

        // Function to calculate bill amount
        double CalculateAmount() const {
            double amount = 0.0;

            // Example slab calculation:
            if (UnitsConsumed <= 100) {
                amount = UnitsConsumed * 1.5;   // Rs. 1.5 per unit
            } else if (UnitsConsumed <= 200) {
                amount = (100 * 1.5) + (UnitsConsumed - 100) * 2.0;
            } else {
                amount = (100 * 1.5) + (100 * 2.0) + (UnitsConsumed - 200) * 3.0;
            }

            return amount;
        }

        // Grant outer class access
        friend class ElectricityBill;
    };

    Bill bill; // Composition: ElectricityBill has a Bill

public:
    // Function to accept consumer details
    void Input() {
        cout << "Enter Consumer Number: ";
        cin >> ConsumerNumber;
        cout << "Enter Consumer Name: ";
        cin >> ConsumerName;

        // Accept units consumed via nested class
        bill.InputUnits();
    }

    // Function to display total bill amount
    void Display() const {
        cout << "\n--- Electricity Bill ---" << endl;
        cout << "Consumer Number: " << ConsumerNumber << endl;
        cout << "Consumer Name: " << ConsumerName << endl;
        cout << "Total Bill Amount: Rs. " << bill.CalculateAmount() << endl;
    }
};

int main() {
    ElectricityBill eb1;

    // Accept consumer and bill details
    eb1.Input();

    // Display bill
    eb1.Display();

    return 0;
}