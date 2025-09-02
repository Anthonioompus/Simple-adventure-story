#include <iostream>

using namespace std;

int main() {
    string pahlawan;
    string musuh;
    string senjata;

    cout << "\n=== Selamat datang di Petualangan Negeri Konoha ===" << endl;
    cout << "Masukkan nama pahlawan kamu: ";
    getline(cin, pahlawan);

    cout << "Masukkan nama musuh yang akan melawan kamu: ";
    getline(cin, musuh);

    cout << "Masukkan nama senjata rahasia yang akan menjadi andalan kamu: ";
    getline(cin, senjata);

    cout << "\n===== Kisah Legenda =====" << endl;
    cout << "Di sebuah negeri yang jauh, hiduplah seorang pahlawan bernama " << pahlawan << "." << endl;
    cout << pahlawan << " ditugaskan untuk mengalahkan monster jahat " << musuh << " yang meneror desa." << endl;
    cout << "Berbekal " << senjata << " andalannya, " << pahlawan << " pun berangkat menuju markas " << musuh << " untuk pertarungan mempertahankan desa nya." << endl;
    cout << "Dengan keberanian, " << pahlawan << " berhasil mengalahkan " << musuh << " dan membawa kedamaian kembali." << endl;

    return 0;
}