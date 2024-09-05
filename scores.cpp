#include <iostream>
using namespace std;

class Student {
private:
    int scores[5]; 

public:

    void input_scores() {
        cout << "Enter 5 exam scores: ";
        for (int i = 0; i < 5; i++) {
            cin >> scores[i];
        }
    }

    int calculate_total_score() {
        int total = 0;
        for (int i = 0; i < 5; i++) {
            total += scores[i];
        }
        return total;
    }
};

int main() {
    Student anna;


    anna.input_scores();
    int total_score = anna.calculate_total_score();
    cout << "Anna's total score: " << total_score << endl;

    return 0;
}
