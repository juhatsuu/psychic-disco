#include <iostream>
#include <math.h>
#include <locale.h>

using namespace std;
float a, b, c, xn, xk, xd, x, f;

int main() {
    setlocale(LC_ALL, "Russian");
    cout << "a, b, c, xn, xk, xd " << endl;
    cin >> a >> b >> c >> xn >> xk >> xd;
    if (c == 0) {
        cout << "на ноль делить нельзя. c = 0" << endl;
    }
    else {
        cout << "______________________________" << endl;
        cout << "|      x     |     f(x)      |" << endl;
        cout << "______________________________" << endl;
        for (x = xn; x <= xk; x += xd) {
            if (x + c != 0) {
                if (c < 0 && b != 0)
                    f = a * x * x + b * b * x;
                else if (c > 0 && b == 0)
                    f = (x + a) / (x + c);
                else
                    f = x / c;
                int A = (int)a; int B = (int)b; int C = (int)c;
                if (((A && B)) || (A && C) != 0)
                    cout << "\n| x = " << x << "     | y = " << f << "      |";
                else
                    cout << "\n| x = " << x << "     | y = " << int(f) << "      |";
            }
            else
                cout << "\n|x + c во втором случае равно 0. на 0 делить нельзя|";
        }
        
    }
    cout << "\n ______________________________";

    return 0;
}
