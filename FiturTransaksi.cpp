#include <iostream>
#include <string>
#include <queue>
#include <stack>
using namespace std;

struct Transaksi {
    string namaPembeli;
    string konser;
    int jumlahTiket;
    int totalBayar;
};

queue<string> antreanPembeli;
stack<Transaksi> riwayatTransaksi;

void masukAntrean() {
    string nama;
    cout << "\nMasukkan Nama Calon Pembeli: ";
    cin.ignore();
    getline(cin, nama);

    antreanPembeli.push(nama);
    cout << "Berhasil! " << nama << " telah masuk ke antrean. (Total Antrean: " << antreanPembeli.size() << ")\n";
}

void prosesPembelian() {
    if (antreanPembeli.empty()) {
        cout << "\nTidak ada antrean saat ini.\n";
        return;
    }

    string pembeli = antreanPembeli.front();
    antreanPembeli.pop();

    cout << "\nMemproses pembeli: " << pembeli << "\n";
    tampiljadwal();

    string idPilihan;
    int jumlah;
    cout << "\nMasukkan ID Konser yang ingin dibeli: ";
    cin >> idPilihan;
    cout << "Jumlah tiket: ";
    cin >> jumlah;

    bool ditemukan = false;
    for (int i = 0; i < 5; i++) {
        if (jadwalkonser[i].id == idPilihan) {
            ditemukan = true;
            if (jadwalkonser[i].stok >= jumlah) {
                jadwalkonser[i].stok -= jumlah;
                int total = jadwalkonser[i].harga * jumlah;

                Transaksi trxBaru = {pembeli, jadwalkonser[i].artis, jumlah, total};
                riwayatTransaksi.push(trxBaru);

                cout << "Transaksi Sukses! Total Bayar: Rp" << total << "\n";
            } else {
                cout << "Maaf, stok tiket tidak mencukupi!\n";
            }
            break;
        }
    }

    if (!ditemukan) {
        cout << "ID Konser tidak ditemukan!\n";
    }
}

void tampilkanRiwayat() {
    if (riwayatTransaksi.empty()) {
        cout << "\nBelum ada transaksi yang terjadi.\n";
        return;
    }

    cout << "\n===  RIWAYAT TRANSAKSI TERAKHIR  ===\n";
    stack<Transaksi> tempStack = riwayatTransaksi;
    int count = 0;

    while (!tempStack.empty() && count < 3) {
        Transaksi trx = tempStack.top();
        cout << count + 1 << ". Pembeli: " << trx.namaPembeli
             << " | Konser: " << trx.konser
             << " | Tiket: " << trx.jumlahTiket
             << " | Total: Rp" << trx.totalBayar << "\n";
        tempStack.pop();
        count++;
    }
}