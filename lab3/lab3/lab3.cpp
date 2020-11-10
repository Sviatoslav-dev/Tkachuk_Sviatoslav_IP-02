#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    setlocale(0, "Russian");

    float a, eps, f, f0;
    int n = 1;

    cout << "a = ";
    cin >> a;

    if (a >= 0 && a <= 2) {
        eps = 0.000001;

        f = pow((a - 1), n) / n;

        do {
            f0 = f;
            n++;

            if (n % 2 == 1) {
                f = f0 + pow((a - 1), n) / n;
            }
            else {
                f = f0 - pow((a - 1), n) / n;
            }

        } while (f - f0 < eps);

        cout << "Ln(a) = " << f << endl;
        cout << "значення, отримане стандартною функцiєю " << log(a);

    }
}