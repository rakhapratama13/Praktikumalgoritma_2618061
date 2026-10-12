#include <iostream>
#include <string>
using namespace std;

int main() {
    string nama, kelas;
    int nim, semester, ipk;
  
    cout << "PRAKTIKUM ALGORITMA 2025\n\n";
  
    cout << "Masukan Nama : ";
    getline(cin, nama);
    cout << "Masukan NIM : ";
    cin >> nim;
    cout << "Masukan Kelas: ";
    cin >> kelas;
    cout << "Semester : ";
    cin >> semester;
    cout << "Masukan IPK : ";
    cin >> ipk;
  
    cout << "\nBIODATA MAHASISWA\n";
    cout << "==================\n";
    cout << "Nama : " << nama <<
endl;
    cout << "NIM : " << nim <<
endl;
    cout << "Kelas : " << kelas <<
endl;
    cout << "Semester : " << semester <<
endl;
    cout << "IPK : " << ipk <<
endl;
    return 0;
}
