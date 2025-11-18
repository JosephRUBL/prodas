#include <iostream>
#include <string>
using namespace std;

struct Mahasiswa {
    string nama;
    int umur;
    float nilai;
};

int main() {
    Mahasiswa mhs;
    mhs.nama = "Joseph";
    mhs.umur = 16;
    mhs.nilai = 100;

    cout << "Data Mahasiswa:" << endl;
    cout << "Nama  : " << mhs.nama << endl;
    cout << "Umur  : " << mhs.umur << " tahun" << endl;
    cout << "Nilai : " << mhs.nilai << endl;

    return 0;
}


#include <iostream>
#include <string>
using namespace std;

struct Mobil {
    string merk;
    int tahun;
    string warna;
};

int main() {

    Mobil mobil1, mobil2;

    mobil1.merk = "Lamborghini Veneno Roadster";
    mobil1.tahun = 2025;
    mobil1.warna = "Emas";

    mobil2.merk = "Honda Civic";
    mobil2.tahun = 2018;
    mobil2.warna = "hitam";


    cout << "Data Mobil 1:" << endl;
    cout << "Merk  : " << mobil1.merk << endl;
    cout << "Tahun : " << mobil1.tahun << endl;
    cout << "Warna : " << mobil1.warna << endl << endl;


    cout << "Data Mobil 2:" << endl;
    cout << "Merk  : " << mobil2.merk << endl;
    cout << "Tahun : " << mobil2.tahun << endl;
    cout << "Warna : " << mobil2.warna << endl;

    return 0;
}

#include <iostream>
#include <string>
using namespace std;

struct Mobil {
    string merk;
    int tahun;
    string warna;
};

int main() {

    Mobil mobil1, mobil2;

    mobil1.merk = "Lamborghini Veneno Roadster";
    mobil1.tahun = 2025;
    mobil1.warna = "Emas";

    mobil2.merk = "Honda Civic";
    mobil2.tahun = 2018;
    mobil2.warna = "hitam";


    cout << "Data Mobil 1:" << endl;
    cout << "Merk  : " << mobil1.merk << endl;
    cout << "Tahun : " << mobil1.tahun << endl;
    cout << "Warna : " << mobil1.warna << endl << endl;


    cout << "Data Mobil 2:" << endl;
    cout << "Merk  : " << mobil2.merk << endl;
    cout << "Tahun : " << mobil2.tahun << endl;
    cout << "Warna : " << mobil2.warna << endl;

    return 0;
}


#include <iostream>
#include <string>
using namespace std;

struct buku {
    char judul[100];
    char pengarang[50];
    float harga;
};

void tampilkanBuku(struct buku data) {
    printf("Judul      : %s\n", data.judul);
    printf("Pengarang  : %s\n", data.pengarang);
    printf("Harga      : Rp%.2f\n", data.harga);
}

int main() {
   
    struct buku buku1 = {"BudiLuhur", "Kepala Sekolah", 75000.0};

 
    tampilkanBuku(buku1);

    return 0;
}



#include <iostream>
#include <string>
using namespace std;

struct Siswa {
    string nama;
    string kelas;
    int nis;
};

int main () {
    const int JUMLAH_SISWA = 3;
    Siswa daftarSiswa[JUMLAH_SISWA];

    cout << "=== Input Data Siswa ===" << endl;

    for (int i = 0; i < JUMLAH_SISWA; i++) {
        cout << "\nSiswa ke-" << i + 1 << endl;
        cout << "Nama  : ";
        getline(cin >> ws, daftarSiswa[i].nama); // ws untuk skip spasi

        cout << "Kelas : ";
        getline(cin, daftarSiswa[i].kelas);

        cout << "NIS   : ";
        cin >> daftarSiswa[i].nis;
    }

    cout << "\n=== Daftar Siswa ===" << endl;
    cout << "--------------------------------" << endl;
    cout << "No.\tNama\t\tKelas\tNIS" << endl;
    cout << "--------------------------------" << endl;

    for (int i = 0; i < JUMLAH_SISWA; i++) {
        cout << i + 1 << "\t" 
             << daftarSiswa[i].nama << "\t\t"
             << daftarSiswa[i].kelas << "\t"
             << daftarSiswa[i].nis << endl;
    }

    cout << "================================" << endl;

    return 0;
}

