#include <iostream>

using namespace std;

int main() {
    float a, b, x;
    cout << " Program obliczajacy miejsca zerowe funkcji liniowej" << endl;
    cout << "Podaj a: ";
    cin >> a;
    cout << "Podaj b: ";
    cin >> b;

    x=(-b)/a;
    cout << "Miejsce zerowe: " << x;


    return 0;
}
