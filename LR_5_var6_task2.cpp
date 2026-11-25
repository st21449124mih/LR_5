#include <iostream>

using namespace std;

int main() {
    unsigned long long product = 1;

    for (int i = 2; i <= 20; i += 2) {
        product *= i;
    }

    cout << "Product of even numbers from 1 to 20: " << product << endl;

    return 0;
}
