#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    const int count = 5;
    double x, y;

    for (int i = 1; i <= count; ++i) {
        cout << "Enter x" << i << ": ";
        cin >> x;

        y = pow(sin(x), 5) + fabs(5.0 * x - 1.5);

        cout << "y" << i << " = " << fixed << setprecision(6) << y << endl;
    }

    return 0;
}
