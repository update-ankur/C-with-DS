#include <iostream>
using namespace std;

int main()
{
    int money, onehundred, fifthy, twenty, ten, five, two, one;

    cout << "==================================" << endl;
    cout << "The Banknotes using CPP" << endl;
    cout << "==================================" << endl;
    cout << "Enter the nominal money (USD)  : $ ";
    cin >> money;

    a = money / 100;
    b = (money % 100) / 50;
    c = (money % 50) / 20;
    d = (money % 20) / 10;
    e = (money % 10) / 5;
    f = (money % 5) / 2;
    g = (money % 2) / 1;

    cout << "==================================" << endl;
    cout << "The Detail Banknotes : " << endl;
    cout << "$ 100 = " << onehundred << " pcs" << endl;
    cout << "$ 50 = " << fifthy << " pcs" << endl;
    cout << "$ 20 = " << twenty << " pcs" << endl;
    cout << "$ 10 = " << ten << " pcs" << endl;
    cout << "$ 5 = " << five << " pcs" << endl;
    cout << "$ 2 = " << two << " pcs" << endl;
    cout << "$ 1 = " << one << " pcs" << endl;
    cout << "==================================" << endl;
}