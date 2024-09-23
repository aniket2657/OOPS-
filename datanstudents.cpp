#include <iostream>
#include <string>
using namespace std;
class Student {
private:
string name;
int rollNo;
int marks[3]; // Array to store marks in 3 subjects
public:
// Method to input student details
void input() {
cout << "Enter name: ";
cin >> name;
cout << "Enter roll number: ";
cin >> rollNo;
cout << "Enter marks for 3 subjects: ";
for (int i = 0; i < 3; i++) {
cin >> marks[i];
}
}
// Method to display student details
void display() const {
cout << "\nName: " << name;
cout << "\nRoll Number: " << rollNo;
cout << "\nMarks in 3 subjects: ";
for (int i = 0; i < 3; i++) {
cout << marks[i] << " ";
}
cout << endl;
}
};
int main() {
int N;
cout << "Enter the number of students: ";
cin >> N;
// Create an array of Student objects
Student students[N];
// Input details for each student
for (int i = 0; i < N; i++) {
cout << "\nEnter details for student " << i + 1 << ":" << endl;
students[i].input();
}
// Display details for each student
cout << "\nDisplaying student details:\n";
for (int i = 0; i < N; i++) {
cout << "\nDetails of student " << i + 1 << ":";
students[i].display();
}
return 0;
}