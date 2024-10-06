#include <iostream>
#include <conio.h>

using namespace std;

class Buku{
	string judul;
	int isbn;
	string penerbit;
	string pengarang;
	string lembar;
	int no_rak;
	
	public:
		void SetBuku(){
			cout << "Masukkan judul: "; cin >> judul;
			cout << "ISBN: "; cin >> isbn;
			cout << "penerbit "; cin >> penerbit;
			cout << "pengarang "; cin >> pengarang;
			cout << "lembar "; cin >> lembar;
			cout << "nomor rak "; cin >> no_rak;
		}
		
		void GetBuku(){
			cout << "Judul Buku: "<< judul<< endl;
			cout << "ISBN : "<< isbn << endl;
			cout << "Penerbit : "<< penerbit << endl;
			cout << "Nama Pengarang: "<< pengarang << endl;
			cout << "Jumlah lembar: "<< lembar << endl;
			cout << "Rak ke-"<< no_rak << endl;
		}
		
		

};
class Peminjam{
	string nama;
	int id_peminjam;
	string isbn;
	string alamat;
	int tgl_peminjaman;
	int tgl_pengembalian;
	float denda;
	
	public:
		void SetPeminjam(){
			cout << "Masukkan nama: ";cin>> nama;
			cout << "ISBN: "; cin >> isbn;
			cout << "id peminjam: "; cin >> id_peminjam;
			cout <<  "alamat peminjam: "; cin >> alamat;
			cout << "Tanggal peminjaman: "; cin >> tgl_peminjaman;
			cout << "Tanggal pengembalian: "; cin >> tgl_pengembalian;
		
			
		}
		void GetPeminjam(){
			cout << "Nama peminjam: "<< nama << endl;
			cout << "ISBN : "<< isbn << endl;
			cout << "ID Peminjam : "<< id_peminjam << endl;
			cout << "Alamat: "<< alamat << endl;
			cout << "Tanggal peminjaman: "<< tgl_peminjaman << endl;
			cout << "Tanggal pengembalian: "<< tgl_pengembalian << endl;
			if (tgl_pengembalian - tgl_peminjaman > 10 ) {
				denda=5000;
				cout << "denda: " << denda << endl;
			}
			else{ cout << "Denda: 0" << endl;
			}
	
};
};
int main(){
	Buku buku1;
	buku1.SetBuku();
	buku1.GetBuku();
	
	Peminjam orang;
	orang.SetPeminjam();
	orang.SetPeminjam();
return 0;
}
