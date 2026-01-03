#include <iostream>

using namespace std;

int main() {
    int n;
    int count = 0;

    cout << "Enter the number you want to extract the digits from: ";
    cin >> n;

    if (n == 0) {
        cout << 0 << endl;
        count = 1;
    } else {
        while (n > 0) {
            int last_digit = n % 10;
            cout << last_digit;
            n = n / 10;
            count++;
        }
    }

    cout << "\nTotal number of digits: " << count << endl;

    return 0;
}
