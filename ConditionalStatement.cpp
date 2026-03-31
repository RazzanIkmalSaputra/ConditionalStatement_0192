#include <iostream>
#include <string>

using namespace std;

// Prosedur untuk input data
void masukanData(double &berat, double &tinggi) {
    cout << "--- Selamat Datang Mahasiswa Kelas F 2025 ---" << endl;
    cout << "Masukkan berat badan (kg): ";
    cin >> berat;
    cout << "Masukkan tinggi badan (meter): ";
    cin >> tinggi;
}

// Fungsi untuk menghitung nilai BMI
double hitungBMI(double berat, double tinggi) {
    return berat / (tinggi * tinggi);
}

// Fungsi untuk mendapatkan status kondisi berat badan
string cekKondisi(double bmi) {
    if (bmi < 18.5) {
        return "Berat Badan Kurang";
    } else if (bmi < 25) {
        return "Berat Badan Normal";
    } else if (bmi < 30) {
        return "Berat Badan Kelebihan";
    } else {
        return "Obesitas";
    }
}

int main() {
    double berat, tinggi, bmi;

    // Memanggil prosedur masukan data
    masukanData(berat, tinggi);

    // Memanggil fungsi hitung BMI
    bmi = hitungBMI(berat, tinggi);

    // Menampilkan hasil sesuai format gambar
    cout << endl;
    cout << "--- Hasil ---" << endl;
    cout << "BMI Anda : " << bmi << endl;
    cout << "Status   : " << cekKondisi(bmi) << endl;

    return 0;
}       