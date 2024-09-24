#include <iostream>
#include <cmath>

double f(double x) {
    if (x < -2) {
        return abs(x / (1 - x)); 
    } else if (-2 <= x <= 1) {
        return pow(x + 2, 2);  
    }
}
double g(double x) {
    if (-4 < x < -1) {
        return abs(x + 6) / (abs(x + 3) - 3); 
    } else if (x >= 5) {
        return log10(x + 10) - 2; 
    } else if (-1 < x < 5){
        return sqrt(5 - x) - 2; 
    }
}

int main() {
    double x;
    std::cout << "Enter the x: ";
    std::cin >> x;
    double res  = f(g(x));
    std::cout << "f(g(x)) = " << res << std::endl;
    return 0;
}


