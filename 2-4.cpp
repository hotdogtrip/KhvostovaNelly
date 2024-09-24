#include <iostream>
#include <cmath>
using namespace std;

main()
{
    string buyer, item, way;
    int Vi, Vf, n, i;
    cout << "enter the final sum: " << endl;
    cin >> Vi;
    cout << "enter your category: " << endl;
    cin >> buyer;
    cout << "enter the category of your items: " << endl;
    cin >> item;
    if (buyer == "отличный"){
        if (item == "A"){
            Vf = Vi * 0.6;
        } else if(item == "B"){
            Vf = Vi * 0.7;
        }else{
            Vf = Vi * 0.8;
        }
    }else if(buyer == "хороший"){
        if (item == "A"){
            Vf = Vi * 0.7;
        } else if(item == "B"){
            Vf = Vi * 0.8;
        }else{
            Vf = Vi * 0.9;
        }
    }else if(buyer == "средний"){
        if (item == "A"){
            Vf = Vi * 0.8;
        } else if(item == "B"){
            Vf = Vi * 0.9;
        }else{
            Vf = Vi;
        }
    }else if(buyer == "плохой"){
        if (item == "A"){
            Vf = Vi;
        } else if(item == "B"){
            Vf = Vi * 1.05;
        }else{
            Vf = Vi * 1.10;
        }
    }
    if (buyer == "отличный" || buyer == "хороший"){
        cout << "choose the way to pay: cash, credit, bill" << endl;
        cin >> way;
        if (way == "bill"){
            cout << "enter the quantity: " << endl;
            cin >> n;
            cout << "enter the percentage: " << endl;
            cin >> i;
            Vf = Vi * (1 + i * n /100);
        }
    }else if()



    
}