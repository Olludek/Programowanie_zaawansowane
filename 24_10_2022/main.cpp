#include <iostream>

using namespace std;

int main() {
    float a, b, x;
    cout << " Program obliczajacy miejsca zerowe funkcji liniowej" << endl;
    cout << "Podaj a: ";
    cin >> a;
    cout << "Podaj b: ";
    cin >> b;

    if(a==0) {
        if(b==0) {
            cout << "nieskonczenie wiele miejsc zerowych" << endl;
        } else {
            cout << "nie ma miejsc zerowych" << endl;
        }
    } else {
        x=(-b)/a;
    cout << "Miejsce zerowe: " << x;
    }


    return 0;
}
