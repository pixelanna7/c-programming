#include <iostream>
using namespace std;

int main() {
    int n, rev = 0, rem, og;
    cout << "Enter an integer: ";
    cin >> n;

    og = n;

    while (n > 0) {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }

    if (og == rev)
        cout << og << " is a palindrome." << endl;
    else
        cout << og << " is not a palindrome." << endl;

    return 0;
}