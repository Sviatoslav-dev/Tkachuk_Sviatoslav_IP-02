#include <iostream>

using namespace std;

int main()
{
    float x, y;

    cout << "enter x: ";
    cin >> x;

    if (x <= -1) {
        y = 1 / (x * x);
    }
    else if (x <= 2) {
        y = x * x;
    }
    else {
        y = 4;
    }

    cout << "y = " << y;
}


