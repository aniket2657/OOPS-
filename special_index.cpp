/* You are given an array A of N elements. 
Now you need to choose the best index of this array A.
 An index of the array is called best if the special sum of this index is maximum across 
 the special sum of all the other indices. To calculate the special sum for any index i,
  you pick the first element that is and add it to your sum. Now you pick next 2 element
  and add both of them to your sum. Now you will pick the next 3 elements, and this continues
   till the index for which it is possible to pick the elements.  */
#include <iostream>
using namespace std;

int specialsum(int arr[], int j, int n) {
    int sum = j;
    int k = 1;
    for (int i = j; i < n; i++) {
        if (sum + k > n) {
            break;
        }
        sum += k;
        k++;
    }

    int adder = 0;
    for (int i = j; i < sum; i++) {
        adder += arr[i];
    }
    return adder;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int big = 0;
    int index = 0;  // Declare the index variable here

    for (int i = 0; i < n; i++) {
        int sum = specialsum(arr, i, n);
        if (sum > big) {
            big = sum;
            index = i;
        }
    }

    cout << "Maximum sum is: " << big << " at index " << index << endl;
    return 0;
}
