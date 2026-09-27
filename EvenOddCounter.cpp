#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    int sum1 = 0, sum2 = 0;
    int total1 = 0, total2 = 0;

    cout << "Enter a starting number: ";
    cin >> num1;

    cout << "Enter an ending number: ";
    cin >> num2;

    while (num1 <= num2) {
        if (num1 % 2 == 0) {
            sum1 += num1;
            total1++;
        }
        else {
            sum2 += num1;
            total2++;
        }

        num1++;
    }

    cout << "Total number of even numbers = " << total1 << endl;
    cout << "Total number of odd numbers = " << total2 << endl;
    cout << "Sum of all even numbers = " << sum1 << endl;
    cout << "Sum of all odd numbers = " << sum2 << endl;

    return 0;
}
