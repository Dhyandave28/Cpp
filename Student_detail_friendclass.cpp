#include <iostream>
using namespace std;

class Student {
private:
    int RollNumber;
    double Marks;

public:
    // Function to accept student details
    void Input() {
        cout << "Enter Roll Number: ";
        cin >> RollNumber;
        cout << "Enter Marks: ";
        cin >> Marks;
    }

    // Declare Result as a friend class
    friend class Result;
};

// Friend class Result
class Result {
public:
    // Function to display student result
    void DisplayResult(const Student& s) {
        cout << "\n--- Student Result ---" << endl;
        cout << "Roll Number: " << s.RollNumber << endl;
        cout << "Marks: " << s.Marks << endl;

        if (s.Marks >= 40) {
            cout << "Result: PASS" << endl;
        } else {
            cout << "Result: FAIL" << endl;
        }
    }
};

int main() {
    Student st;
    Result res;

    // Accept student details
    st.Input();

    // Display result using friend class
    res.DisplayResult(st);

    return 0;
}
