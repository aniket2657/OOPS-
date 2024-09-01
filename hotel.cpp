/*Define a class named `Hotel` in C++ with the following specifications: 
Private Members: - Rno: Data member to store the room number. 
- Name: Data member to store the customer's name. -
 Tariff: Data member to store the per-day charges. - 
 NOD: Data member to store the number of days of stay. -
  CALC (): Function to calculate and return the total amount as `NOD * Tariff`. 
  If the value of `NOD * Tariff` exceeds 10,000, 
  the total amount should be calculated as `1.05 * NOD * Tariff` Public Members: - 
  Checkin(): Function to input the values for `Rno`, `Name`, `Tariff`, and `NOD`. -
   Checkout (): Function to display the values of `Rno`, `Name`, `Tariff`, `NOD`, and the total amount. -
    The total amount should be calculated by calling the `CALC ()` function.  */

#include <iostream>
#include <string>
using namespace std;

class Hotel {
private:
    int Rno;
    string name;
    int tariff;
    int NOD;

    // Changed return type to double for accurate calculation
    double calc() {
        if (NOD * tariff > 10000) {
            return 1.05 * NOD * tariff; // Calculates with a 5% surcharge
        } else {
            return NOD * tariff; // No surcharge
        }
    }

public:
    void checkin() {
        cout << "Enter the room number (Rno): ";
        cin >> Rno;
        cin.ignore();  // To clear the newline character from the buffer
        cout << "Enter the name: ";
        getline(cin, name);
        cout << "Enter the tariff: ";
        cin >> tariff;
        cout << "Enter the number of days (NOD): ";
        cin >> NOD;
    }

    void checkout() {
        double p = calc(); // Using double to hold the result
        cout << "\nRoom number: " << Rno << endl;
        cout << "Name: " << name << endl;
        cout << "Tariff: " << tariff << endl;
        cout << "Number of days (NOD): " << NOD << endl;
        cout << "Total amount: " << p << endl;
    }
};

int main() {
    Hotel h;
    h.checkin();
    h.checkout();
    return 0;
}
