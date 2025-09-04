#include <iostream>
using namespace std;

int main() {
    int n;

    do {
        cout << "Enter a number: ";
        cin >> n;
    } while (n >= 0);

    cout << "You entered a negative number. Exiting..." << endl;
    return 0;
}
