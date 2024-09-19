#include <iostream>
#include <cmath>
using namespace std;


int main()
{
    float w, k, A, T, fi;
    const double pi = 3.141592653589793;
    cout << "enter the w: " << endl;
    cin >> w;
    cout << "enter the k: " << endl;
    cin >> k;
    cout << "enter the A: " << endl;
    cin >> A;
    fi = asin(1/k);
    T = (pi/2 - fi) / w;
    cout << "x(t) = ";
    cout << A * sin(w * T + fi) << endl;
    return 0;
}