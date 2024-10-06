#include <iostream>
#include <vector>

using namespace std;

class Siswa {
public:
    int id;
    int nisn;
    string nama;
    int umur;
};

vector<Siswa> daftarSiswa;

void tampilData() {
    cout << " ID " << " NISN " << " Nama " << " Umur " << endl;
    for (int i = 0; i < daftarSiswa.size(); i++) {
        cout << daftarSiswa[i].id << " " << daftarSiswa[i].nisn << " " << daftarSiswa[i].nama << " " << daftarSiswa[i].umur << endl;
    }
}

void tambahData() {
    Siswa siswaBaru;
    cout << "Masukkan NISN: ";
    cin >> siswaBaru.nisn;
    cout << "Masukkan Nama: ";
    cin >> siswaBaru.nama;
    cout << "Masukkan Umur: ";
    cin >> siswaBaru.umur;
    siswaBaru.id = daftarSiswa.size() + 1;
    daftarSiswa.push_back(siswaBaru);
}

void ubahData() {
    int nisn;
    cout << "Masukkan NISN yang ingin diubah: ";
    cin >> nisn;
    for (int i = 0; i < daftarSiswa.size(); i++) {
        if (daftarSiswa[i].nisn == nisn) {
            cout << "Masukkan Nama baru: ";
            cin >> daftarSiswa[i].nama;
            cout << "Masukkan Umur baru: ";
            cin >> daftarSiswa[i].umur;
            break;
        }
    }
}

void hitungRataRata() {
    int totalUmur = 0;
    for (int i = 0; i < daftarSiswa.size(); i++) {
        totalUmur += daftarSiswa[i].umur;
    }
    cout << "Rata-rata umur siswa adalah: " << totalUmur / daftarSiswa.size() << endl;
}

int main() {
    char perintah;
    do {
        cout << "Menu " << endl;
        cout << " Tekan L untuk melihat data " << endl;
        cout << " Tekan T untuk menambahkan data " << endl;
        cout << " Tekan R untuk menunjukkan rata - rata umur siswa " << endl;
        cout << " Tekan B untuk keluar dari aplikasi " << endl;
        cout << " Ketikkan instruksi anda : ";
        cin >> perintah;
        if (perintah == 'L' || perintah == 'l') {
            tampilData();
        } else if (perintah == 'T' || perintah == 't') {
            tambahData();
        } else if (perintah == 'R' || perintah == 'r') {
            hitungRataRata();
        } else if (perintah == 'B' || perintah == 'b') {
            cout << "Keluar dari aplikasi" << endl;
        } else {
            cout << "Perintah tidak dikenali" << endl;
        }
    } while (perintah != 'B' && perintah != 'b');

    return 0;
}
