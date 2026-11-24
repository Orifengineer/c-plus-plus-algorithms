#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int numbers[5];
    int sum = 0;
    double average;

    cout << "Enter 5 integers:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> numbers[i];
        sum += numbers[i];
    }

    average = static_cast<double>(sum) / 5;

    cout << "Sum = " << sum << endl;
    cout << fixed << setprecision(2);
    cout << "Average = " << average << endl;

    return 0;
}
