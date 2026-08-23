#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, og, rem, digits = 0;
    int sum = 0;

    cout << "Enter an integer: ";
    cin >> n;

    og = n;
    int temp = n;
    while (temp > 0) {
        digits++;
        temp /= 10;
    }
    temp = n;
    while (temp > 0) {
        rem = temp % 10;
        sum += round(pow(rem, digits));
        temp /= 10;
    }

    if (sum == og)
        cout << og<< " is an Armstrong number." << endl;
    else
        cout << og << " is not an Armstrong number." << endl;

    return 0;
}
