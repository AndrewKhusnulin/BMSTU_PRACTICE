#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    double y; 
    int x;
    cout << "Введите x:";
    cin >> x;
    if (x==10) cout << "Данный значение не входит в ОДЗ!";
    else {
        y = ((pow(x,5) - (7*pow(x,3)) - 3) / (x-10));
        cout << "Полученное значение y:";
        cout << y;
    }
}
