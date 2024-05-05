// struct
#include <iostream>
using namespace std;

struct mahasiswa {
    string nim;
    string nama;
    string alamat;
    string umur;
};

int main() {
    mahasiswa mhs;
    cout << "nomor mahasiswa : ";
    cin >> mhs.nim;
    cout << "nama mahasiswa : ";
    cin >> mhs.nama;
    cout << "alamat mahasiswa : ";
    cin >> mhs.alamat;
    cout << "umur mahasiswa : ";
    cin >> mhs.umur;

    cout << endl;
    cout << "\n NIM : " << mhs.nim;
    cout << "\n Nama : " << mhs.nama;
    cout << "\n Alamat : " << mhs.alamat;
    cout << "\n Umur : " << mhs.umur;
};



#include <iostream>
using namespace std;

int main()
{
	
	int NilaiMTK, Nilaibahasainggris;
	string status, status2;
	float Rerata;

	cout << "Nilai Matematika" << endl;
	cin >> NilaiMTK;
	cout << "Nilai bahasainggris" << endl;
	cin >> Nilaibahasainggris;

	Rerata = (NilaiMTK + Nilaibahasainggris) / 2;

	if (NilaiMTK > 80 || Rerata > 70)
	{
		status = "Lulus";
		if (Nilaibahasainggris >= 80)
			status2 = "Lulusan Terbaik";
	}
	else
	{
		status = "Tidak Lulus";
	}
	cout << "Nilai Matematika: " << NilaiMTK << endl;
	cout << "Nilai bahasainggris: " << Nilaibahasainggris << endl;
	cout << "Status Kelulusan: " << status << endl;
	cout << "Status Mahasiswa: " << status2;
}