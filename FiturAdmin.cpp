#include <iostream>
#include <string>
using namespace std;


void menuAdmin() {
    string password;
    cout << "\n=== MENU AKSES ADMIN ===\n";
    cout << "Masukkan Password Admin: ";
    cin >> password;

    
    if (password != "admin123") {
        cout << "Password salah! Akses ditolak.\n";
        return; 
    }


    string idCari;
    cout << "\nAkses Diterima. Silakan Update Jadwal / Stok Konser.\n";
    tampiljadwal(); 
    
    cout << "\nMasukkan ID Konser yang ingin diubah: ";
    cin >> idCari;
    
    bool ditemukan = false;
    for(int i = 0; i < 5; i++) {
        if(jadwalkonser[i].id == idCari) {
            ditemukan = true;
            cout << "\nData Lama -> Artis: " << jadwalkonser[i].artis << ", Stok: " << jadwalkonser[i].stok << ", Harga: " << jadwalkonser[i].harga << "\n";
            
            cout << "Masukkan Nama Artis Baru: ";
            cin.ignore();
            getline(cin, jadwalkonser[i].artis);
            
            cout << "Masukkan Stok Baru: ";
            cin >> jadwalkonser[i].stok;
            
            cout << "Masukkan Harga Baru: ";
            cin >> jadwalkonser[i].harga;
            
            cout << "\nJadwal konser berhasil diperbarui oleh Admin!\n";
            break;
        }
    }
    
    if(!ditemukan) {
        cout << "ID Konser tidak ditemukan!\n";
    }
}