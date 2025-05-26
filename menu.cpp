#include <iostream>
#include <conio.h>
using namespace std;

const int MAX_SIZE = 50; 
int arry[MAX_SIZE]; 
int n; 

string quotes[MAX_SIZE];  
int totalQuotes = 0;

void dMenu(){
system("cls");
cout<<"Aplikasi Sorting Bubble"<<"\n";       
cout<<"1. Memasukkan data"<<"\n";            
cout<<"2. Menampilkan data"<<"\n";            
cout<<"3. Sorting"<<"\n";           
cout<<"4. Sepatah Kata"<<"\n";            
cout<<"5. Exit"<<"\n";           
cout<<"Masukan angka :";        

}
void inputData(){
  system("cls");
  cout << "Masukkan jumlah elemen array (MAKSIMAL 50) :";
  cin >> n;
  if (n > MAX_SIZE) {
    cout << "Jumlah elemen melebihi batas maksimum!" << endl;
    getch();
    return;
  }
  cout << "Masukkan " << n << " angka:\n";
  for (int i = 0; i < n; ++i) {
    cout << "Elemen ke-" << i + 1 << ": ";
    cin >> arry[i];
  }
}


void mPertama(string pesan){
system("cls");
cout<<"hallo saya menu "<<pesan;
getch();
}

void SepatahKata(){
  system("cls");
  cout << "Indonesa Bisa, Kita Juara\n @POLIBAN";
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
do
{
    dMenu();
    pl=getch();
  switch (pl)
  {
   case '1':
    /* code */
    mPertama("pertama");
    break;
   case '2':
    mPertama("ke- dua");
    /* code */ 
    break;  
   case '3':
    mPertama("ke- tiga");
    /* code */
    break;  
   case '4':
    SepatahKata();
    /* code */
    break;  
  case '5':
    /* code */
    break;
  
  default:
    system("cls");
    cout<<"Pilihan Tidak Tersedia";
    getch();
    break;
  }


} while (pl!='5');
  return 0;
}