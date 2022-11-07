#include <iostream>
#include <cmath>

using namespace std;

void fliniowa() {
    float a, b, c, x, y;
    cout << " Program obliczajacy miejsca zerowe funkcji liniowej" << endl;
    cout << "Podaj a: ";
    cin >> a;
    cout << "Podaj b: ";
    cin >> b;
    cout << "Podaj c: ";
    cin >> c;

    if(a==0) {
        if(b==0) {
            cout << "Nieskonczenie wiele miejsc zerowych" << endl;
        } else {
            cout << "Nie ma miejsc zerowych" << endl;
        }
    } else {
        x=(-b)/a;
    cout << "Miejsce zerowe: x=" << x;
    }

    cout << endl;
    cout << "Postac ogolna funkcji liniowej ->  ";
    cout << a <<"x+" << b <<"y+" << c << "=0" << endl;

    cout << endl;
    cout << "Postac kierunkowa funkcji liniowej" << endl;
    y=(a*x)+b;
    cout << "y= " << y;
}

void fkwadratowa () {
    float a, b, c, x, y, x1, x2, delta;
    cout << " Program obliczajacy miejsca zerowe funkcji kwadratowej" << endl;
    cout << "Podaj a: ";
    cin >> a;
    cout << "Podaj b: ";
    cin >> b;
    cout << "Podaj c: ";
    cin >> c;

    if (a!=0) {
        delta= (b*b)-4*a*c;
        x1=(-b-sqrt(delta))/2*a;
        x2=(-b+sqrt(delta))/2*a;

        cout << "Delta: " << delta << endl;

        if (delta<0) {
            cout << " Nie ma miejsc zerowych" << endl;
        } else if (delta==0) {
            cout << "Jedno miejsce zerowe: x=" << -b/2*a << endl;
        } else {
            cout << "Dwa miejsca zerowe: x1=" << x1 << " , " << " x2=" << x2 << endl;
        }
    } else {
        cout << "Funkcja nie posiada rozwiazania poniewaz a=0" << endl;
    }
}

void kanoniczna () {
    float a, p, q, x1, x2;
    cout << "Program obliczaj¹cy miejsca zerowe w postaci kanonicznej."<<endl;
    cout << "Podaj a: " << endl;
    cin >> a;
    cout << "Podaj p: " <<  endl;
    cin >> p;
    cout << "Podaj q: " << endl;
    cin >> q;

    if((-q/a)<0) {
        cout << "Funcja nie ma miejsc zerowych" << endl;
    } else {
        x1=p+sqrt(-q/a);
        x2=p-sqrt(-q/a);
        cout << "Pierwsze miejsce zerowe: x1=" << x1 << endl;
        cout << "Drugie miejsce zerowe: x2=" << x2 << endl;
    }
}



int main () {
    int x = 0;

    while(x>3 || x<1) {
    cout << "MENU"<<endl;
    cout << "1. Funkca liniowa"<<endl;
    cout << "2. Funkcja kwadratowa"<<endl;
    cout << "3. Postac kanoniczna funkcji kwadratowej" <<endl;
    cout << "Wybieram: ";
    cin >> x;

    system("cls");
    }

    switch (x) {
        case 1:
            fliniowa();
            break;

        case 2:
            fkwadratowa();
            break;

        case 3:
            kanoniczna();
            break;
    }

    system("PAUSE");
    return EXIT_SUCCESS;

    return 0;
}
