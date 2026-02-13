#include <iostream>
using namespace std;

class Company {
private:
    string CompanyName;

    // Nested class Manager
    class Manager {
    private:
        string ManagerName;
        int Experience; // in years

    public:
        // Function to accept manager details
        void InputManager() {
            cout << "Enter Manager Name: ";
            cin >> ManagerName;
            cout << "Enter Experience (in years): ";
            cin >> Experience;
        }

        // Function to display manager details
        void ShowManager() const {
            cout << "Manager Name: " << ManagerName << endl;
            cout << "Experience: " << Experience << " years" << endl;
        }

        // Grant Company access to Manager
        friend class Company;
    };

    Manager mgr; // Composition: Company has a Manager

public:
    // Function to accept company name
    void Input() {
        cout << "Enter Company Name: ";
        cin >> CompanyName;
    }

    // Function to accept manager details
    void InputManager() {
        mgr.InputManager();
    }

    // Function to display company and manager details
    void Display() const {
        cout << "\n--- Company Details ---" << endl;
        cout << "Company Name: " << CompanyName << endl;
        mgr.ShowManager();
    }
};

int main() {
    Company c1;

    // Accept company and manager details
    c1.Input();
    c1.InputManager();

    // Display details
    c1.Display();

    return 0;
}