#include <iostream>
#include <stdio.h>
using namespace std;
int main() {
    int x;
    cout << "Введите номер месяца:" << endl;
    cin >> x;
    switch (x) {
        case 1:{
            cout << "Январь" << endl;
            break;}
        case 2:{
            cout << "Февраль" << endl;
            break;}
        case 3:{
            cout << "Март" << endl;
            break;}
        case 4:{
            cout << "Апрель" << endl;
            break;}
        case 5:{
            cout << "Май" << endl;
            break;}
        case 6:{
            cout << "Июнь" << endl;
            break;}
        case 7:{
            cout << "Июль" << endl;
            break;}
        case 8:{
            cout << "Август" << endl;
            break;}
        case 9:{
            cout << "Сентябрь" << endl;
            break;}
        case 10:{
            cout << "Октябрь" << endl;
            break;}
        case 11:{
            cout << "Ноябрь" << endl;
            break;}
        case 12:{
            cout << "Декабрь" << endl;
            break;}
        default:
            cout << "Такого месяца нет" << endl;
    }
    return 0;
}
