#include <iostream>
#include <cstring>

using namespace std;

string vigenere_sifreleme(string metin, string anahtar) {
    int metin_uzunluk = metin.length();
    int anahtar_uzunluk = anahtar.length();

    string sifreli_metin = "";

    for (int i = 0; i < metin_uzunluk; i++) {
        char metin_char = metin[i];
        char anahtar_char = anahtar[i % anahtar_uzunluk];

        char sifreli_char = ((metin_char + anahtar_char) % 26) + 'A';

        sifreli_metin += sifreli_char;
    }

    return sifreli_metin;
}

int main() {
    string metin;
    cout << "Sifrelemek istediginiz metni girin: ";
    getline(cin, metin);

    string anahtar;
    cout << "Anahtari girin: ";
    getline(cin, anahtar);

    string sifreli_metin = vigenere_sifreleme(metin, anahtar);
    cout << "Sifrelenmis metin: " << sifreli_metin << endl;

    return 0;
}
