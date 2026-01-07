#include <iostream>
using namespace std;

int main() {
    double weight, height;
    cout << "Enter weight (kg): ";
    cin >> weight;
    cout << "Enter height (m): ";
    cin >> height;
    double bmi = weight / (height * height);
    cout << "BMI: " << bmi << "\n";
}
