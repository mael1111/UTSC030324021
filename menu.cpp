#include <iostream>
#include <conio.h>
using namespace std;

const int MAX_SIZE = 50; 
int arry[MAX_SIZE]; 
int n; 

void dMenu(){
system("cls");
cout<<"Aplikasi Sorting Buble"<<"\n";       
cout<<"1. Memasukkan data"<<"\n";            
cout<<"2. Menampilkan data"<<"\n";            
cout<<"3. Sorting"<<"\n";           
cout<<"4. Sepatah Kata"<<"\n";            
cout<<"5. Exit"<<"\n";           
cout<<"Masukan angka :";        

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