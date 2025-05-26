#include <iostream>
#include <conio.h>
#include <cstdlib> // Untuk system("cls")
using namespace std;

const int MAX_SIZE = 50;
int arry[MAX_SIZE], n;
string quotes[MAX_SIZE];
int totalQuotes = 0;

void dMenu() {
    system("cls");
    cout << "Aplikasi Sorting Bubble\n";
    cout << "1. Memasukkan Data\n";
    cout << "2. Menampilkan Data\n";
    cout << "3. Sorting\n";
    cout << "4. Sepatah Kata\n";
    cout << "6. Masukkan Kata Bijak\n";
    cout << "7. Tampilkan Kata Bijak Acak\n";
    cout << "5. Exit\n";
    cout << "Masukkan angka: ";
}

void inputData() {
    system("cls");
    cout << "Masukkan jumlah elemen array (MAKSIMAL 50): ";
    cin >> n;

    if (n > MAX_SIZE) {
        cout << "Jumlah elemen melebihi batas maksimum!\n";
        getch();
        return;
    }

    cout << "Masukkan " << n << " angka:\n";
    for (int i = 0; i < n; ++i) {
        cout << "Elemen ke-" << i + 1 << ": ";
        cin >> arry[i];
    }
}

void showMessage(string pesan) {
    system("cls");
    cout << "Halo, saya menu " << pesan << "\n";
    getch();
}

void SepatahKata() {
    system("cls");
    cout << "Indonesia Bisa, Kita Juara\n@POLIBAN\n";
    getch();
}

void inputQuotes() {
    system("cls");

    if (totalQuotes >= MAX_SIZE) {
        cout << "Maksimum kata bijak tercapai!\n";
        getch();
        return;
    }

    cout << "Masukkan kata bijak: ";
    cin.ignore();
    getline(cin, quotes[totalQuotes]);
    totalQuotes++;

    cout << "Kata bijak telah disimpan!\n";
    getch();
}

void displayQuotes() {
    system("cls");

    if (totalQuotes == 0) {
        cout << "Belum ada kata bijak yang dimasukkan.\n";
    } else {
        int idx = rand() % totalQuotes;
        cout << "Kata Bijak Hari Ini:\n\"" << quotes[idx] << "\"\n";
    }

    getch();
}

int main() {
    char pl;

    do {
        dMenu();
        pl = getch();

        switch (pl) {
            case '1': inputData(); break;
            case '2': showMessage("ke- dua"); break;
            case '3': showMessage("ke- tiga"); break;
            case '4': SepatahKata(); break;
            case '6': inputQuotes(); break;
            case '7': displayQuotes(); break;
            case '5': break;
            default:
                system("cls");
                cout << "Pilihan Tidak Tersedia\n";
                getch();
                break;
        }

    } while (pl != '5');

    return 0;
}