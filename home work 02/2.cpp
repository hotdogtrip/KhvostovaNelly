#include <iostream>
using namespace std;
#include <cmath>

int main(){
    char cont;
    do{
        int opt, dec=0, num, n = 0, n1 = 9;
        cout << " Введите число от 1000 до 99999999 " << endl;
        cin >> num;

        if (num < 1000 || num > 99999999) {
            cout << "Неверный ввод. Попробуйте снова." << endl;
            break;
        }

        cout<<"\n Выбери одну из опций [2 - 7] "<<endl;
        cout << "[2] Выведите цифры числа, начиная с наименьшего позиционного порядка и заканчивая наибольшим. " << endl;
        cout<< "[3] Посчитать сколько цифр имеет число"<< endl;
        cout << "[4] Возвращает наименьшую и наибольшую цифру числа"<<endl;
        cout<< "[5] Возвращает сумму цифр числа"<<endl;
        cout << "[6] Вернуть произведение нечетных цифр"<<endl;
        cout << "[7] Вычислите превернутую версию числа"<<endl;
        cout << "---------------------------------------------------"<<endl;
        cout << "Choose an option: ";
        cin >> opt;

        switch(opt){
            case 2:
                while (num > 0){
                    cout << num % 10 << " ";
                    num /= 10;                    
                }
            case 3:
                while (num > 0){
                    dec += 1;
                    num /= 10;                
                }
                cout << dec << endl;
            case 4:
                while (num > 0){
                    n = max(n, num % 10);
                    n1 = min(n1, num % 10);
                    num /= 10;
                }
                cout<<"Наибольшая цифра "<<n<<endl;
                cout<<"Наименьшая цифра "<<n1<<endl;
            case 5:
                while (num > 0){
                    n += num % 10;
                    num /= 10;
                }
                cout<< n << endl;
            case 6:
                while (num > 0){
                    if (n != 0 && num % 10 % 2==1)
                        n *= num % 10;
                    if (n == 0 && num % 10 % 2 == 1)
                        n = num % 10;
                    num/=10;
                }
                cout << n <<endl;
            case 7:
                while (num > 0){
                    n = n * 10 + num % 10;
                    num /= 10;
                }
                cout << n <<endl;
        }
        
        cout << "Хотите продолжить? (y / n): ";
        cin >> cont;

    } while (cont == 'y' || cont == 'Y');
    
}