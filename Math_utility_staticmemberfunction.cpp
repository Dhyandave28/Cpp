#include <iostream>
using namespace std;

class MathUtility {
public:
    // Static member function to add two numbers
    static int add(int a, int b) {
        return a + b;
    }

    // Static member function to subtract two numbers
    static int subtract(int a, int b) {
        return a - b;
    }
};

int main() {
    // Calling static functions without creating an object
    cout << "Addition (10 + 5): " << MathUtility::add(10, 5) << endl;
    cout << "Subtraction (10 - 5): " << MathUtility::subtract(10, 5) << endl;

    return 0;
}
