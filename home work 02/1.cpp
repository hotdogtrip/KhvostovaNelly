#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int A, B;

    cout << "Введите число A: " << endl;
    cin >> A;
    cout << "Введите число B: " << endl;
    cin >> B;

    int sumA = 0, sumB = 0;
    for (int i = 1; i <= A; i ++){
        if (A % i == 0){
            sumA += i;
        }
    }
    for (int i = 1; i <= B; i ++){
        if (B % i == 0){
            sumB += i;
        }
    }
    cout << sumA + sumB << endl;


    int numA = 0, numB = 0;
    for (int i = 1; i <= A; i ++){
        if (A % i == 0){
            numA++;
        }
    }
    for (int i = 1; i <= B; i ++){
        if (B % i == 0){
            numB++;
        }
    }
    cout << numA * numB << endl;
    

    int proA = 1, proB = 1;
    for(int i = 1; i <= A; i++){
        if (i % 2 == 1 && A % i == 0){
            proA *= i;
        }
    }

    for(int i = 1; i <= B; i++){
        if (i % 2 == 0 && B % i == 0){
            proB *= i;
        }
    }
    cout << proB + proA << endl;

    int obdel;
    for(int i = 1; i <= A && i <= B; i ++){
        if (A % i == 0 && B % i == 0){
            obdel = i;
        }
    }
    cout << obdel << endl;

    return 0;
}