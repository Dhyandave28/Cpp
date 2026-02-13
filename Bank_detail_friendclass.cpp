#include <iostream>
using namespace std;

class BankAccount {
private:
    int AccountNumber;
    double Balance;

    // Static data member
    static string BankName;

public:
    // Constructor to initialize account
    BankAccount(int accNo, double bal) {
        AccountNumber = accNo;
        Balance = bal;
    }

    // Constant function to display account details
    void ShowAccount() const {
        cout << "\n--- Account Details ---" << endl;
        cout << "Account Number: " << AccountNumber << endl;
        cout << "Balance: Rs. " << Balance << endl;
    }

    // Declare Auditor as a friend class
    friend class Auditor;
};

// Define and initialize static data member
string BankAccount::BankName = "National Bank of India";

// Friend class Auditor
class Auditor {
public:
    // Function to display bank details
    void DisplayBankDetails(const BankAccount& acc) {
        cout << "\n--- Auditor Report ---" << endl;
        cout << "Bank Name: " << BankAccount::BankName << endl;
        cout << "Account Number: " << acc.AccountNumber << endl;
        cout << "Balance: Rs. " << acc.Balance << endl;
    }
};

int main() {
    // Create a BankAccount object
    BankAccount account1(12345, 50000.75);

    // Show account details
    account1.ShowAccount();

    // Auditor accessing private data
    Auditor auditor;
    auditor.DisplayBankDetails(account1);

    return 0;
}
