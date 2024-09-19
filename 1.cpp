#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b, c, sum, qual, floor;
    cout << "enter the number of meters with roof:" << endl;
    cin >> a;
    a = a * 5000;
    cout << "enter the number of meters without roof:" << endl;
    cin >> b;
    b = b * 3000;
    cout << "enter the number of meters of the garden:" << endl;
    cin >> c;
    c = c * 1000;
    sum = a + b + c;
    cout << "enter the quality of materials: " << endl;
    cout << "high - 1, saman - 2, other - 3" << endl;
    cin >> qual;
    if (qual = 1){
        sum = sum * 1.15;
    }else if (qual = 2){
        sum = sum * 1.1;
    }else{
        sum = sum * 1.05;
    }
    string base;
    cout << "do you have water and sewerage? Y/N" << endl;
    cin >> base;
    if (base == "Y"){
        sum += 2500;
    }
    cout << "enter the nuber of floors: " << endl;
    cin >> floor;
    if (floor = 2){
        sum = sum * 1.10;
    }else if((floor = 3) || (floor = 4)){
        sum = sum * 1.15;
    }else if(floor > 4){
        sum = sum * 1.2;
    }else{
        sum = sum * 1;
    }
    cout << sum << endl;
    return 0;
}

