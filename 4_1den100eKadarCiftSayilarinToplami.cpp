#include <iostream>

using namespace std;

int toplam = 0, sayac = 1;

// 1 den 100'e kadar olan cift sayilari toplayan program

int main(){
    /*
    for (int sayac = 1; sayac <= 100; sayac++){
        if (sayac % 2 == 0){
            toplam += sayac;
        }
    }
    */
    while (sayac < 100) {
        if (sayac % 2 == 0) {
            cout << sayac << endl;
            toplam += sayac;
        }
        sayac++;
    }

    cout << "Cift sayilarin toplami: " << toplam << endl;
    return 0;
}
