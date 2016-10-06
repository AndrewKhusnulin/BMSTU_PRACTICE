#include <iostream>
#include <stdio.h>
using namespace std;
//Программа для определения месяца
int main() {
    int x; //Декларация переменной
    cout << "Введите номер месяца:";
    cin >> x; //Вводим переменную
    switch (x) { //Вводим переключатель для мультиветвления фрагмента
        case 1:
            cout << "Январь";
            break; //Выход из переключателя
        case 2:
            cout << "Февраль";
            break;
        case 3:
            cout << "Март";
            break;
        case 4:
            cout << "Апрель";
            break;
        case 5:
            cout << "Май";
            break;
        case 6:
            cout << "Июнь";
            break;
        case 7:
            cout << "Июль";
            break;
        case 8:
            cout << "Август";
            break;
        case 9:
            cout << "Сентябрь";
            break;
        case 10:
            cout << "Октябрь";
            break;
        case 11:
            cout << "Ноябрь";
            break;
        case 12:
            cout << "Декабрь";
            break;
        default: //Условие,если ни одна метка не сработала
            cout << "Такого месяца нет";
    }
    return 0;
}
