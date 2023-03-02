#include <iostream>
using namespace std;

double windChill(double t, double v);

int main() {
	cout.setf(ios::fixed);
	cout.precision(1);
    // 15 degrees Fahrenheit and 45 MPH = -8.9 degrees Fahrenheit
    cout << windChill(15,45) << endl;
    // -8 degrees Fahrenheit and 38 MPH = -39.3 degrees Fahrenheit
    cout << windChill(-8,38) << endl;
    // 55 degrees Fahrenheit and 33 MPH = 55.0 degrees Fahrenheit
    cout << windChill(55,33) << endl;
	// 17 degrees Fahrenheit and 28 MPH = -2.2 degrees Fahrenheit
	cout << windChill(17,28) << endl;
    return 0;
}

