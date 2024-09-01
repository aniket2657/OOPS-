/* Write a C++ to calculate the electricity bill of a user according to the below criteria: 
Input: The program prompts the user to enter their name and the number of units consumed. 
Charges Calculation: For the first 100 units, the charge is 60 paise per unit. 
For the next 200 units, the charge is 80 paise per unit. For units beyond 300,
 the charge is 90 paise per unit. A minimum charge of Rs 50 is applied if the total charge is less than Rs 50. 
 If the charge exceeds Rs 300, a 15% surcharge is added */
#include <iostream>
#include <iomanip> // Include for setting precision
using namespace std;

int main() {
    string name;
    int units;
    double billAmount = 0.0;

    cout << "Enter your name: ";
    getline(cin, name); // user input

    cout << "Enter the number of units consumed: ";
    cin >> units;

    // Calculating the bill
    if (units <= 100) {
        billAmount = units * 0.60;
    } else if (units <= 300) {
        billAmount = 100 * 0.60 + (units - 100) * 0.80;
    } else {
        billAmount = 100 * 0.60 + 200 * 0.80 + (units - 300) * 0.90;
    }

    // Applying minimum charge if necessary
    if (billAmount < 50) {
        billAmount = 50;
    }

    // Adding surcharge if necessary
    if (billAmount > 300) {
        billAmount += billAmount * 0.15;
    }

    // Displaying the result
    cout << "\nElectricity Bill for " << name << ":\n";
    cout << "Total units consumed: " << units << " units\n";
    cout << "Total charge: Rs " << fixed << setprecision(2) << billAmount << endl;

    return 0;
}
