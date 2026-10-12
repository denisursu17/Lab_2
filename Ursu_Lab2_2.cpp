
#include <iostream>
using namespace std;

int main() {
    int m, n;

    cout << "Enter m: ";
    cin >> m;
    cout << "Enter n: ";
    cin >> n;

    cout << "Before: m = " << m
         << ", n = " << n << endl;

    int result = --m * ++n;

    cout << "Result = " << result << endl;
    cout << "After: m = " << m
         << ", n = " << n << endl;

    return 0;
}
