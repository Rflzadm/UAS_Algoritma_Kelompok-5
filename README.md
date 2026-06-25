# UAS_Algoritma_Kelompok-5
# Sistem Pemesanan Tiket Konser (C++)
> Aplikasi berbasis CLI (Command Line Interface) untuk mengelola antrean pembeli, pemesanan tiket konser, dan pencatatan riwayat transaksi secara real-time menggunakan struktur data modern.

---

## 👥 Anggota Kelompok & Pembagian Tugas
Pengembangan kode program ini dibagi secara kolaboratif dan dipantau secara terstruktur:

| Nama Anggota | Peran / Tugas yang Dikerjakan | File Source Code / Modul | Status |
| :--- | :--- | :--- | :--- |
| **Refliza** | - **Ketua Kelompok**<br>- Memantau progres pekerjaan anggota tim<br>- Manajemen repositori GitHub | *Management & Monitoring* | ✅ Aktif |
| **Andin** | - Inisialisasi jadwal konser<br>- Manajemen struktur data informasi tiket<br>- Menampilkan daftar konser aktif | `TiketKonser.cpp` | ✅ Selesai |
| **Rezia** | - Implementasi **Queue** untuk antrean pembeli<br>- Validasi kuota & proses pemotongan stok<br>- Implementasi **Stack** untuk riwayat transaksi | `FiturTransaksi.cpp` | ✅ Selesai |
| **Riyyan** | - Integrasi modul file program<br>- Pembuatan alur menu utama (*Main Workflow*)<br>- Validasi pilihan menu user | `main.cpp` | ✅ Selesai |

---

## 🚀 Fitur Utama Sistem
* **Manajemen Jadwal & Stok (Array of Struct):** Menyimpan data konser (ID, Nama Artis, Stok, dan Harga) dengan kapasitas maksimal 5 konser.
* **Sistem Antrean Pembeli (Queue / FIFO):** Calon pembeli wajib mengantre terlebih dahulu. Pembeli yang pertama kali masuk antrean akan diproses lebih dulu (*First-In, First-Out*).
* **Riwayat Transaksi Terakhir (Stack / LIFO):** Mencatat setiap transaksi yang sukses. Riwayat akan menampilkan maksimal 3 transaksi terbaru dengan urutan transaksi paling terakhir diletakkan di paling atas (*Last-In, First-Out*).
* **Validasi Stok Otomatis:** Sistem akan menolak pembelian jika jumlah tiket yang dipesan melebihi sisa stok yang tersedia di sistem.

---

## 🛠️ Struktur Data & Konsep C++ yang Diterapkan
Program ini memanfaatkan beberapa konsep fundamental dan lanjutan dari mata kuliah Struktur Data:
1. **`struct` (`tiketkonser` & `Transaksi`):** Digunakan untuk membungkus tipe data objek kompleks menjadi satu kesatuan.
2. **Array of Struct (`jadwalkonser[5]`):** Untuk menampung daftar jadwal konser yang bersifat statis.
3. **`std::queue` (STL):** Digunakan untuk mengelola antrean pembeli (`antreanPembeli`) dengan fungsi `.push()`, `.pop()`, dan `.front()`.
4. **`std::stack` (STL):** Digunakan untuk mencatat memori riwayat transaksi (`riwayatTransaksi`) dengan fungsi `.push()`, `.pop()`, dan `.top()`.

---