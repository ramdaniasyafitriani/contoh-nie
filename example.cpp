#include <iostream> 
using namespace std;

int arr[20]; // Membuat Array dengan panjang data 20
int n; // Membuat variable inputan n
void input()
{ // procedure input
    while (true)
    {
        cout << "Masukkan jumlah data pada Array : "; // Membuat inputan jumlah element
        cin >> n; //Memanggil variable inputan n

        if (n <= 20)
        { // Mmebuat kondisi n tidak lebih dari 20
            break;
        }
        else 
        {
            cout << "\nArray yang anda masukkan maksimal 20 elemen. \n " ; // Menampilkan pesan jika data lebih
        }
    }
    cout << endl; // Membuat jarak per baris program
    cout << "======================" << endl;
    cout << "Masukkan element array" << endl;
    cout << "======================" << endl;

}
