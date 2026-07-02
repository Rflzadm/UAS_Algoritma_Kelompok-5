#include <iostream>
using namespace std;

// PENTING: FiturJadwal harus di-include duluan agar FiturTransaksi mengenali jadwalkonser
#include "FiturJadwal.cpp"
#include "FiturTransaksi.cpp"
#include "FiturAdmin.cpp"

int main() {
    inisialisasijadwal();
    int pilihan;

    do {
        cout << "\n=====================================";
        cout << "\n    SISTEM PEMESANAN TIKET KONSER    ";
        cout << "\n=====================================\n";
        cout << "1. Lihat Jadwal Konser\n";
        cout << "2. Masuk Antrean Pembelian\n";
        cout << "3. Proses Pembelian Tiket (Dari Antrean)\n";
        cout << "4. Lihat Riwayat Transaksi Terakhir\n";
        cout << "5. Menu Khusus Admin (Ganti Jadwal/Stok)\n"; // Menu Admin
        cout << "6. Keluar\n";
        cout << "Pilih menu (1-6): ";
        cin >> pilihan;

        switch(pilihan) {
            case 1: tampiljadwal(); break;
            case 2: masukAntrean(); break;
            case 3: prosesPembelian(); break;
            case 4: tampilkanRiwayat(); break;
            case 5: menuAdmin(); break; // Memanggil proteksi login admin
            case 6: cout << "\nKeluar dari program. Terima kasih!\n"; break;
            default: cout << "\nPilihan tidak valid!\n";
        }
    } while(pilihan != 6);

    return 0;
}