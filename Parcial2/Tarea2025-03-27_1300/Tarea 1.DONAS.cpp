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
    int donas;
    int costo;
    int cant;

    donas = 10;
    cant = 0;
    costo = 0;
    cin >> cant;
    if (cant >= 30) {
        costo = cant * donas - cant * 2;
        cout << costo << endl;
    } else {
        if (cant >= 50) {
            costo = cant * donas - cant * 1;
            cout << costo << endl;
        } else {
            cout << costo * cant * donas << endl;
            costo = cant * donas;
            cout << costo << endl;
        }
        cout << costo << endl;
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
