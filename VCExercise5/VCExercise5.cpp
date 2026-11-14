// Exercise 5: Current in a circuit using Ohm's Law
// I = V / R

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Variables
    double voltage;      // V, potential difference (volts)
    double resistance;   // R, resistance (ohms)
    double current;      // I, calculated current (amperes)

    // Input
    cout << "Circuit Current Calculator" << endl << endl;

    cout << "Enter the voltage (volts): ";
    cin >> voltage;

    cout << "Enter the resistance (ohms): ";
    cin >> resistance;

    // Calculation
    current = voltage / resistance;

    // Output
    cout << fixed << setprecision(4);
    cout << endl;
    cout << "Voltage:    " << voltage << " V" << endl;
    cout << "Resistance: " << resistance << " ohms" << endl;
    cout << "Current:    " << current << " A" << endl;

    system("pause");
    return 0;
}