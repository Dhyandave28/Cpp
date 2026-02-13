#include <iostream>
using namespace std;

class HospitalPatient {
private:
    int PatientID;
    string Disease;

    // Static data member
    static string HospitalName;

public:
    // Function to accept patient details
    void Input() {
        cout << "Enter Patient ID: ";
        cin >> PatientID;
        cout << "Enter Disease: ";
        cin >> Disease;
    }

    // Constant function to display patient details
    void ShowPatient() const {
        cout << "\n--- Patient Details ---" << endl;
        cout << "Patient ID: " << PatientID << endl;
        cout << "Disease: " << Disease << endl;
    }

    // Static function to display hospital name
    static void ShowHospital() {
        cout << "\nHospital Name: " << HospitalName << endl;
    }
};

// Define and initialize the static data member outside the class
string HospitalPatient::HospitalName = "City Care Hospital";

int main() {
    HospitalPatient p1;

    // Accept patient details
    p1.Input();

    // Display patient details
    p1.ShowPatient();

    // Display hospital name (static function)
    HospitalPatient::ShowHospital();

    return 0;
}