#include <iostream>

using namespace std;

// Klavyeden girilen bir sayinin karesi ile kupunu hesaplayan program

int main(){
    int sayi, kare, kup;

    cout << "Bir sayi giriniz: ";
    cin >> sayi;

    kare = sayi * sayi;
    kup = sayi * sayi * sayi;

    cout << "Girdiginiz sayinin karesi: " << kare << endl;
    cout << "Girdiginiz sayinin kupu  : " << kup << endl;
    return 0;
}
