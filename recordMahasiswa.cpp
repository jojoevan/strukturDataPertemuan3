#include <iostream>
#include <string>
using namespace std;

struct mahasiswa
{
    string nrp, nama, jurusan, email, fakultas, tahunMasuk;
    int umur;
    string hobi[3];
};

int main() {
    int n;

    cout << "Masukkan berapa data mahasiswa yang ingin dimasukkan: ";
    cin >> n;

    mahasiswa mhs[n];

    for(int i = 0; i < n; i++) {
    cout << "Data mahasiswa ke-" << i+1 << endl;

    cout << "NRP          : ";
    cin >> mhs[i].nrp;
    cin.ignore();

    cout << "Nama Lengkap : ";
    getline(cin, mhs[i].nama);

    cout << "Jurusan      : ";
    getline(cin, mhs[i].jurusan);

    cout << "Fakultas     : ";
    getline(cin, mhs[i].fakultas);

    cout << "Tahun Masuk  : ";
    getline(cin, mhs[i].tahunMasuk);

    cout << "Umur         : ";
    cin >> mhs[i].umur;
    cin.ignore();

    cout << "Masukkan 3 hobimu: " << endl;
    for(int j = 0; j < 3; j++) {
        cout << "Hobi ke-" << j+1 << " : ";
        getline(cin, mhs[i].hobi[j]);
    }
}


    cout << "\n==========DATA MAHASISWA ITS==========\n";

    for(int i = 0; i < n; i++) {
        cout << "Mahasiswa Ke-" << i+1 << endl;
        cout << "NRP          : " << mhs[i].nrp << endl;
        cout << "Nama Lengkap : " << mhs[i].nama << endl;
        cout << "Jurusan      : " << mhs[i].jurusan << endl;
        cout << "Fakultas     : " << mhs[i].fakultas << endl;
        cout << "Angkatan     : " << mhs[i].tahunMasuk << endl;
        cout << "Umur         : " << mhs[i].umur << endl;

        cout << "Hobi         : ";
        for(int j = 0; j < 3; j++) {
            cout << mhs[i].hobi[j];
            if (j == 1) {
                cout << ", dan ";
            } else if (j == 2) {
                cout << "";
            } else {
                cout << ", ";
            }
        }
        cout << endl;
    }

    return 0;
}