#include <iostream>
#include <string>

using namespace std;


void masukanData(double &berat, double &tinggi) {
    cout << "--- Selamat Datang Mahasiswa Kelas F 2025 ---" << endl;
    cout << "Masukkan berat badan (kg): ";
    cin >> berat;
    cout << "Masukkan tinggi badan (meter): ";
    cin >> tinggi;
}
double hitungBMI(double berat, double tinggi) {
    return berat / (tinggi * tinggi);
}

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

  
    masukanData(berat, tinggi);


    bmi = hitungBMI(berat, tinggi);


    cout << endl;
    cout << "--- Hasil ---" << endl;
    cout << "BMI Anda : " << bmi << endl;
    cout << "Status   : " << cekKondisi(bmi) << endl;

    return 0;
}       