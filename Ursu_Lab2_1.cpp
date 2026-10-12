#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b;

    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;

    if (b == 0 || b == 3 * a) {
        cout << "Division by zero!" << endl;
        return 0;
    }

    float af = a, bf = b;

    float numF = pow(af - bf, 3) -
                 (pow(af, 3) - 3 * af * af * bf);
    float denF = pow(bf, 3) - 3 * af * bf * bf;
    float resultF = numF / denF;

    double numD = pow(a - b, 3) -
                  (pow(a, 3) - 3 * a * a * b);
    double denD = pow(b, 3) - 3 * a * b * b;
    double resultD = numD / denD;

    cout << "Float result: " << resultF << endl;
    cout << "Double result: " << resultD << endl;

    return 0;
}
