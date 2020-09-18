#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x;
    double k;
    cout << "Please, enter your 'x' (x - any real number) and 'k' (k - natural number, k>1) in one line:" << endl;
    cin >> x >> k;
    double g = -k;
    long double e1 = exp(-x);
    double eps = pow(10.0, g);
    long double s = x / 1;
    long double e2 = 1 - s;
    int n = 1;
    while (abs(s) > eps) {
        n = ++n;
      s = -(s * x / n);
      e2 = e2 - s;
    }
    cout << "e1=" << e1 << endl << "e2=" << e2 << endl;
    return 0;
}

