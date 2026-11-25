#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double a, b, h;

    cout << "Enter a, b, h: ";
    cin >> a >> b >> h;

    if (h <= 0 || a > b) {
        cout << "Invalid interval or step!" << endl;
        return 1;
    }

    const double eps = 1e-9;

    cout << "-----------------------" << endl;
    cout << ":     X     :     Y     :" << endl;
    cout << "-----------------------" << endl;

    double x = a;
    while (x <= b + eps) {
        if (fabs(x + 7.0) < eps) {
            cout << "-----------------------" << endl;
            cout << "x = " << x << " is outside the domain (x != -7). Stopping output." << endl;
            return 0;
        }

        double y = (5.0 * x * x - 7.0 * x + 3.0) / (x + 7.0) - 13.0 * cos(x);

        cout << ": " << setw(9) << fixed << setprecision(4) << x
             << " : " << setw(9) << fixed << setprecision(4) << y
             << " :" << endl;

        x += h;
    }

    cout << "-----------------------" << endl;

    return 0;
}
