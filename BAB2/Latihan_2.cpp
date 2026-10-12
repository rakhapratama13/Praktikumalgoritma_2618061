#include <iostream>
#include <string>
using namespace std;
int main() {
    string namaPelanggan, namaMakanan, namaMinuman;
    int nomorMeja = 61;
    int hargaMakanan, jumlahMakanan;
    int hargaMinuman, jumlahMinuman;
    int biayaTambahan, uangBayar;
    int totalBayar, uangKembali;
    cout << "==============================" << endl;
    cout << "    WARUNG MAKAN SEDERHANA" << endl;
    cout << "==============================" << endl;
    cout << "Nama Pelanggan : ";
    getline(cin, namaPelanggan);
    cout << "Nomor Meja     : " << nomorMeja << endl;
    cout << "\n--- DATA MAKANAN ---" << endl;
    cout << "Nama Makanan   : ";
    getline(cin, namaMakanan);
    cout << "Harga Makanan  : Rp ";
    cin >> hargaMakanan;
    cout << "Jumlah Makanan : ";
    cin >> jumlahMakanan;
    cin.ignore();
    cout << "\n--- DATA MINUMAN ---" << endl;
    cout << "Nama Minuman   : ";
    getline(cin, namaMinuman);
    cout << "Harga Minuman  : Rp ";
    cin >> hargaMinuman;
    cout << "Jumlah Minuman : ";
    cin >> jumlahMinuman;
    cout << "\n--- DATA TAMBAHAN ---" << endl;
    cout << "Biaya Es/Topping : Rp ";
    cin >> biayaTambahan;
    cout << "\n--- PEMBAYARAN ---" << endl;
    cout << "Uang Bayar     : Rp ";
    cin >> uangBayar;
    totalBayar = (hargaMakanan * jumlahMakanan)
               + (hargaMinuman * jumlahMinuman)
               + biayaTambahan;
    uangKembali = uangBayar - totalBayar;
    cout << "\n==============================" << endl;
    cout << "       STRUK PEMBAYARAN" << endl;
    cout << "==============================" << endl;
    cout << "Nama Pelanggan : " << namaPelanggan << endl;
    cout << "Nomor Meja     : " << nomorMeja << endl;
    cout << "Makanan        : " << namaMakanan << endl;
    cout << "Minuman        : " << namaMinuman << endl;
    cout << "Total Bayar    : Rp " << totalBayar << endl;
    cout << "Uang Bayar     : Rp " << uangBayar << endl;
    cout << "Uang Kembali   : Rp " << uangKembali << endl;
    cout << "==============================" << endl;
    return 0;
}
