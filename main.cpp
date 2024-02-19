#include <iostream>
#include <string>
using namespace std;

/*Ввести з клавіатури довжину ребра куба.
  Вивести на екран площу однієї грані,
  площу повної поверхні і об'єм цього куба.*/

int main() {
    string numS;
    double num;
    cout << "Введіть довжину сторони куба: ";
    cin >> numS;

    try {
        size_t pos;
        num = stod(numS, &pos);
        if (pos < numS.size()|| num <= 0 || num > 1000000000) {
            throw 1;
        }
    }
    catch(...) {
        cout << "Ви ввели некоректну довжину сторони!";
        return 1;
    }

    num = stod(numS);

    cout << endl << "Якщо довжина сторони куба = " << num << endl;
    cout << "Площа однієї грані:" << num * num << endl;
    cout << "Площа повної поверхні: " << num * num * 6 << endl;
    cout << "Об'єм куба: " << num * num * num;
    return 0;
}