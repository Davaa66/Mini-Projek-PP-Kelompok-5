#include <iostream>
#include <string>

using namespace std;

const int MAX_TUGAS = 50;
string namaTugas[MAX_TUGAS];
string deadline[MAX_TUGAS];
string prioritas[MAX_TUGAS];
bool statusTugas[MAX_TUGAS];
int jumlahTugas = 0;


// Bagian 1: Fungsi tambah tugas
void tambahTugas() {
    if (jumlahTugas > MAX_TUGAS){
        cout << "Tugas Penuh" << endl;
    }else {
        cout << "Masukan nama tugas: ";
        getline(cin, namaTugas[jumlahTugas]);
        cout << "Masukan deadline tugas: ";
        getline(cin, deadline[jumlahTugas]);
        cout << "Masukan prioritas tugas (tinggi/sedang/rendah): ";
        getline(cin, namaTugas[jumlahTugas]);

        statusTugas[jumlahTugas] = false;
        jumlahTugas++;
        cout << "Tugas berhasil ditambahkan" << endl;
    }
}

// Bagian 2: Tampilkan Tugas
void tampilkanTugas() {
    if(jumlahTugas == 0){
        cout << "Tidak ada tugas yang tersedia" << endl;
        return;
    }
    cout << "\n===== DAFTAR TUGAS =====\n" << endl;
    for (int i = 0; i < jumlahTugas; i++){
        cout << "Tugas " << (i + 1) << endl;
        cout << "Nama : " << namaTugas[i] << endl;
        cout << "Deadline : " << deadline[i] << endl;
        cout << "Prioritas : " << prioritas[i] << endl;
        cout << "Status : ";
        if (statusTugas[i] == true){
            cout << "Selesai" << endl;
        } else {
            cout << "Belum Selesai" << endl;
        }
        cout << "------------------------" << endl;
    }
}

// Bagian 3: Ubah status tugas
void ubahStatus() {
}

// Bagian 4: Hapus tugas
void hapusTugas() {
}

// Bagian 5: Fungsi Statistik & menu
void tampilkanStatistik() {
}

void tampilkanMenu() {
    cout << "\n===== PROGRAM TO-DO LIST MAHASISWA =====\n";
    cout << "1. Tambah Tugas\n";
    cout << "2. Lihat Daftar Tugas\n";
    cout << "3. Ubah Status Tugas\n";
    cout << "4. Hapus Tugas\n";
    cout << "5. Statistik\n";
    cout << "6. Keluar\n";
}

// Fungsi utama
int main(){
    // tampilkanMenu();
    tambahTugas();

    return 0;
}