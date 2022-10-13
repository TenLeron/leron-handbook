#include <iostream>
using namespace std;

int vyber, cislo1, cislo2, vysledekO, vysledekS;

void ctverec() {
    cout << "==============" << endl;
    cout << "Byl zvolen čtverec" << endl;
    cout << "Zadejte stranu A: ";
    cin >> cislo1;
    while (cislo1 <= 0) {
        cout << "Byla zadána záporná hodnota - s tou nejde počítat" << endl;
        cout << "Opakujte zadání: ";
        cin >> cislo1;
    }
    vysledekO = 4 * cislo1;
    vysledekS = cislo1 * cislo1;
    cout << "Obvod: " << vysledekO << endl;
    cout << "Obsah: " << vysledekS << endl;
    return;
}
void obdelnik() {
    cout << "==============" << endl;
    cout << "Byl zvolen obdelník" << endl;
    cout << "Zadejte stranu A: ";
    cin >> cislo1;
    cout << "Zadejte stranu B: ";
    cin >> cislo2;

    while (cislo1 <= 0 || cislo2 <= 0) {
        cout << "Byla zadána záporná hodnota - s tou nejde počítat" << endl;
        if (cislo1 <= 0) {
            cout << "Zadejte znovu stranu A: ";
            cin >> cislo1;
        }
        else {
            cout << "Zadejte znovu stranu B: ";
            cin >> cislo2;
        }
    }
    vysledekO = 2* (cislo1 + cislo2);
    vysledekS = cislo1 * cislo2;
    cout << "Obvod: " << vysledekO << endl;
    cout << "Obsah: " << vysledekS << endl;
    return;
}



int main() {
    cout << "Geometrická kalkulačka pro základní útvary" << endl;
    cout << "Vyberte si možnost počítání: " << endl;
    cout << "1. Čtverec" << endl;
    cout << "2. Obdelník" << endl;
    cout << "Váš výběr: ";

    cin >> vyber;
    switch (vyber) {
        case 1:
            ctverec();
            break;
        case 2:
            obdelnik();
            break;
        default:
            cout << "Nebyla vybrána žádná možnost..." << endl;
            break;
    }
    return 0;
}
