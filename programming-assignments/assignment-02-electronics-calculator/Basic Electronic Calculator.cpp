#include <iostream>
#include <string>

using namespace std;

int main() {
    string studentName;
    double voltage;
    double resistance;
    double current;
    double power;

    cout << "Enter your name: ";
    cin >> studentName;

    cout << "Enter Voltage: ";
    cin >> voltage;

    cout << "Enter Resistance: ";
    cin >> resistance;

    current = voltage / resistance;
    power = voltage * current;

    cout << "Name: " << studentName << "\n";
    cout << "Voltage: " << voltage << " V\n";
    cout << "Resistance: " << resistance << " Ohms\n";
    cout << "Current: " << current << " A\n";
    cout << "Power: " << power << " W\n";

    return 0;
}
