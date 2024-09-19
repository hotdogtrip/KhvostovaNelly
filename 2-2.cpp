#include <iostream>
#include <cmath>
using namespace std;

main()
{
    float t, x, y, H, V, T, a, g = 9.8;
    const double pi = 3.141592653589793;
    cout << "enter the t: " << endl;
    cin >> t;
    cout << "enter the H: " << endl;
    cin >> H;
    cout << "enter the a: " << endl;
    cin >> a;
    a = a * pi / 180;
    cout << "enter the V: " << endl;
    cin >> V;
    T = (V * sin(a)) / g * (1 + sqrt(1 + (2 * g * H) / pow(V, 2) * pow(sin(a), 2)));
    x = V * T * cos(a);
    y = H + V * T * sin(a) - 0.5 * g * pow(t, 2);
    cout << "x(T) = ";
    cout << x << endl;

    if (y <= 0){
        cout << "y(T) = 0" << endl;
    }else{
        cout << "y(T) = "; 
        cout << y << endl;
    }
    
    return 0;
}