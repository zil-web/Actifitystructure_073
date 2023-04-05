#include<iostream>
using namespace std;

struct mahasiswa
{
	string nim;
	string nama;
	string alamat;
	int umur;

};

int main() {
	mahasiswa mhs, mhs2;

	mhs.nim = "20210140073";
	mhs.umur = 19;
	mhs.nama = "muhammad nilzam";
	mhs.alamat = "riau";

	cout << "masukan NIMM : ";
	cin >> mhs2.nim;
	cout << "masukan umur : ";
	cin >> mhs2.umur;
	cout << "memasukan nama : ";
	cin >> mhs2.nama;
	cout << "memasukan alamat : ";
	cin >> mhs2.alamat;

	cout << "nim : " << mhs.nim;
	cout << "\numur : " << mhs.umur;
	cout << "\nnama : " << mhs.nama;
	cout << "\nalamat : " << mhs.alamat;

	cout << "nim : " << mhs2.nim;
	cout << "\numur : " << mhs2.nim;
	cout << "\nnama : " << mhs2.nim;
	cout << "\nalamat : " << mhs2.alamat;

};
