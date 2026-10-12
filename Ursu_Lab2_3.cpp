#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    const double pi = 3.141592653589793;
    double L, h, r, S;

    cout << "Enter circle length L: ";
    cin >> L;

    cout << "Enter cylinder height h: ";
    cin >> h;

    if (L <= 0 || h <= 0) {
        cout << "Invalid input!" << endl;
        return 0;
    }

    r = L / (2 * pi);
    S = 2 * pi * r * r + L * h;

    cout << fixed << setprecision(4);
    cout << "Radius = " << r << endl;
    cout << "Surface area = " << S << endl;

    return 0;
}
