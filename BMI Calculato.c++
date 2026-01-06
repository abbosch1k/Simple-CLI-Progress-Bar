#include <iostream>
using namespace std;

int main() {
    float weight, height;
    cout << "Enter weight (kg): ";
    cin >> weight;
    cout << "Enter height (m): ";
    cin >> height;

    float bmi = weight / (height * height);

    cout << "Your BMI: " << bmi << endl;
    if (bmi < 18.5) cout << "Underweight" << endl;
    else if (bmi < 24.9) cout << "Normal" << endl;
    else if (bmi < 29.9) cout << "Overweight" << endl;
    else cout << "Obese" << endl;

    return 0;
}
