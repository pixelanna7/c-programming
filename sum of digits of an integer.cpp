#include <iostream>
using namespace std;

int main() {
    int n, sum = 0, rem;
    cout << "Enter an integer: ";
    cin >> n;

    int temp = n;
    while (temp > 0) {
        rem = temp % 10;
        sum += rem;
        temp /= 10;
    }

    cout << "Sum of digits of " << n << " = " << sum << endl;
    return 0;
}