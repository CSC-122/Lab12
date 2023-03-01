#include <iostream>
using namespace std;

double windChill(double t, double v);

int main() {
    double temp, windSpd;
    cout << "Enter the temperature: ";
    cin >> temp;
    cout << "Enter the wind speed: ";
    cin >> windSpd;
    cout.setf(ios::fixed);
    cout.precision(1);
    cout << " The wind chill temperature is " << windChill(temp,windSpd)  << " degrees Fahrenheit";
    return 0;
}