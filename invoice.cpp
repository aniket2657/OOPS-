#include <iostream>
#include <string>
using namespace std;
class Invoice {
private:
string partNumber;
string partDescription;
int quantity;
double price_per_item;
public:
Invoice(string partNum, string partDesc, int qty, double price) { 
partNumber = partNum;
partDescription = partDesc;
setQuantity(qty);
setPricePerItem(price);
}
// Setters
void setPartNumber(string partNum) {
partNumber = partNum;
}
void setPartDescription(string partDesc) {
partDescription = partDesc;
}
void setQuantity(int qty) {
if (qty > 0) {
quantity = qty;
} else {
quantity = 0;
}
}
void setPricePerItem(double price) {
if (price > 0) {
price_per_item = price;
} else {
price_per_item = 0.0;
}
}
// Getters
string getPartNumber() {
return partNumber;
}
string getPartDescription(){
return partDescription;
}
int getQuantity() {
return quantity;
}
double getPricePerItem() {
return price_per_item;
}
// Method to calculate invoice amount
double getamount() {
return quantity * price_per_item;
}
};
int main() {
// Create an Invoice object
Invoice invoice("QCB14", "TITAN WATCH", 10, 25.50);
// Display invoice details
cout << "Part Number: " << invoice.getPartNumber() << endl;
cout << "Part Description: " << invoice.getPartDescription() << endl;
cout << "Quantity: " << invoice.getQuantity() << endl;
cout << "Price per Item: " << invoice.getPricePerItem() << endl;
cout << "Total Invoice Amount: " << invoice.getamount() << endl;
return 0;
}