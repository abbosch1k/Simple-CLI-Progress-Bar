#include <iostream>
using namespace std;

int main() {
    double usd;
    cout << "Enter USD: ";
    cin >> usd;

    cout << "EUR: " << usd * 0.9 << endl;
    cout << "GBP: " << usd * 0.78 << endl;
    cout << "JPY: " << usd * 145 << endl;
    return 0;
}
