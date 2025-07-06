#include <iostream>
using namespace std;

class Number {
private:
    int num,num1;

public:
    // Default constructor
    Number() : num(0) {}

    // Parameterized constructor
    Number(int n) : num(n) {}

    // Input function
    void input() {
        cout << "Enter a number: ";
        cin >> num;
    }

    // Output function
    void output() const {
        cout << "Number: " << num << endl;
    }

    // Overloading unary increment operator (++)
    Number operator++() {
        num1=++num;
        return num1;
    }

    // Overloading unary minus (-)
    Number operator-() {
        return Number(-num);
    }
};

int main() {
    Number N1, N2(5), N3(-8);

    cout << "N1: ";
    N1.output();

    cout << "N2: ";
    N2.output();

    cout << "N3: ";
    N3.output();

    // Using unary increment operator (++)
    ++N1;
    cout << "After incrementing N1: ";
    N1.output();

    // Using unary minus (-)
    Number N4 = -N3;
    cout << "After negating N3: ";
    N4.output();

    return 0;
}
