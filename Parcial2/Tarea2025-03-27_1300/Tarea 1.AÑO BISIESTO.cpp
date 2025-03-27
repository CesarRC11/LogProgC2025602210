#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

// Headers
string toString (double);
int toInt (string);
double toDouble (string);

int main() {
    int año;

    año = 0;
    cin >> año;
    if (año % 400 == 0) {
        if (año % 100 == 0) {
            if (año % 4 == 0) {
                cout << "Es año bisiesto" << endl;
            }
        }
    } else {
        cout << "No es año bisiesto" << endl;
    }
    return 0;
}

// The following implements type conversion functions.
string toString (double value) { //int also
    stringstream temp;
    temp << value;
    return temp.str();
}

int toInt (string text) {
    return atoi(text.c_str());
}

double toDouble (string text) {
    return atof(text.c_str());
}
