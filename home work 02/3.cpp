#include <iostream>
#include <cmath>
using namespace std;
using std::cout;
using std::cin;

int n;
int fact(int n){
    if (n < 0){
        return 0;
    }
    if (n == 0 || n == 1){
        return 1;
    }else{
        return n * fact(n - 1);
    }
}
    
int main(){
    char cont;
    do {
        int num, opt, x, k, r;
        double res = 0;
        cout << "enter the number in range 2 and 20" << endl;
        cin >> num;
        if (num <= 2 && num >= 20){
            cout << "incorrect answer. try again" << endl;
            break;
        }
        cout << "choose an option" << endl;
        cout << "[1]. Введите значение переменной «x» для оценки в функции и количество членов «n» для ряда МакЛорена." << endl;
        cout << "[2]. Рассчитать Ряд Маклорена для показательной функции (e^x)" << endl;
        cout << "[3]. Рассчитать Ряд Маклорена для функции натурального логарифма (ln (1 + x))" << endl;
        cout << "[4]. Рассчитать Ряд Маклорена для синусоидальной функции (sin (x))" << endl;
        cout << "[5]. Рассчитать Ряд Маклорена для функции косинуса (cos (x))" << endl;
        cout << "[6]. Рассчитать Ряд Маклорена для рациональной функции" << endl;
        cout << "enter an option" << endl;
        cin >> opt;
        cout << "enter the x" << endl;
        cin >> x;
        switch(opt){
            case 2:
                for(int i = 1; i <= num; i ++){
                    res += pow(x, i) / fact(i);
                }
                cout << res << endl;
            case 3:
                for(int i = 1; i <= num; i ++){
                    if (i % 2 == 0){
                        res -= pow(x, i) / i;
                    }else{
                        res += pow(x, i) / i;
                    }
                }
                cout << res << endl;
            case 4:
                r = 1;
                for(int i = 1; i <= num; i + 2){
                    if (r % 2 == 1){
                        res += pow(x, i) / fact(i);
                    }else{
                        res -= pow(x, i) / fact(i);
                    }
                    r += 1;
                }
                cout << res << endl;
            case 5:
                k = 0;
                for(int i = 0; i <= num; i + 2){
                    if (k % 2 == 0){
                        res += pow(x, i) / fact(i);
                    }else{
                        res -= pow(x, i) / fact(i);
                    }
                    k += 1;
                }
                cout << res << endl;
            case 6:
                if (x < 1 && x > (-1)){
                    for (int i = 1; i <= num; i ++){
                    res += i * pow(x, i - 1);
                    }
                }else{
                    cout << "choose x in range -1 and 1" << endl;
                    break;
                }
            }
        cout << "do you want to continue? y/n?" << endl;
        cin >> cont;
    }while(cont == 'y');
}